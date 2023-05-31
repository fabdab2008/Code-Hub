#include<bits/stdc++.h>
using namespace std;
class Song {
private:
    string title;
    string artist;
    int duration;
    int views;

public:
    Song(string title, string artist, int duration, int views)
        : title(title), artist(artist), duration(duration), views(views) {}

    string getTitle()
     { return title; }
    void setTitle(string title) 
    { this->title = title; }
    string getArtist()
     { return artist; }
    void setArtist(string artist)
     { this->artist = artist; }
    int getDuration()
     { return duration; }
    void setDuration(int duration)
     { this->duration = duration; }
    int getViews()
     { return views; }
    void setViews(int views) 
    { this->views = views; }
};

class Playlist {
private:
    string name;
    vector<Song> songs;

public:
    Playlist(string name) : name(name) {}

    string getName() { return name; }
    void setName(string name) { this->name = name; }
    vector<Song> 
    getSongs()
     { return songs; }

    void addSong(Song song) {
        if (songs.size() < 5) {
            songs.push_back(song);
        } else {
            cout << "Playlist is full. Cannot add more songs." << endl;
        }
    }
//songs.erase(songs.begin()+i);
    void deleteSong(Song song) {
        for (int i = 0; i < songs.size(); i++) {
            if (songs[i].getTitle() == song.getTitle() && songs[i].getArtist() == song.getArtist()) {
                songs.erase(songs.begin() + i);
                cout << "Song deleted from the playlist." << endl;
                return;
            }
        }
        cout << "Song not found in the playlist." << endl;
    }

    void displaySongs() {
        if (songs.empty()) {
            cout << "Playlist is empty." << endl;
        } else {
            cout << "Songs in playlist: " << endl;
            for (int i = 0; i < songs.size(); i++) {
                cout << "Title: " << songs[i].getTitle() << ", Artist: " << songs[i].getArtist() << endl;
            }
        }
    }

    vector<Song> getSongs()
     { return songs; }
};

//depends on the views
Song getMostPopularSong(Playlist playlist) {
    Song mostPopularSong = playlist.getSongs()[0];
    for (int i = 1; i < playlist.getSongs().size(); i++) {
        if (playlist.getSongs()[i].getViews() > mostPopularSong.getViews()) {
            mostPopularSong = playlist.getSongs()[i];
        }
    }
    return mostPopularSong;
}
int main() {
    vector<Playlist*> playlists;
    int MAX_PLAYLISTS = 5;

    while (true) {
        cout << "Application Options:\n";
        cout << "1. Create a playlist\n";
        cout << "2. Display the playlists\n";
        cout << "Enter Option: ";
        int option;
        cin >> option;

        if (option == 1) {
            if (playlists.size() == MAX_PLAYLISTS) {
                cout << "Maximum number of playlists reached.\n";
                continue;
            }

            cout << "Playlist Name: ";
            string playlistName;
            cin >> playlistName;

            Playlist* playlist = new Playlist(playlistName);
            playlists.push_back(playlist);

            while (true) {
                cout << playlist->getName() << " OPTIONS:\n";
                cout << "1. Add a song\n";
                cout << "2. Delete a song\n";
                cout << "3. Display the songs\n";
                cout << "4. Most popular song\n";
                cout << "5. Return to main menu\n";
                cout << "Enter Playlist Option: ";
                int playlistOption;
                cin >> playlistOption;

                if (playlistOption == 1) {
                    cout << "Info about a song:\n";
                    cout << "Title: ";
                    string title;
                    cin >> title;
                    cout << "Artist: ";
                    string artist;
                    cin >> artist;
                    cout << "Duration: ";
                    int duration;
                    cin >> duration;
                    cout << "Views: ";
                    int views;
                    cin >> views;

                    Song song(title, artist, duration, views);
                    playlist->addSong(song);
                }
                else if (playlistOption == 2) {
                    cout << "Enter the title of the song to delete: ";
                    string title;
                    cin >> title;

                    Song songToDelete(title, "", 0, 0);
                    playlist->deleteSong(songToDelete);
                }
                else if (playlistOption == 3) {
                    cout << "Songs:\n";
                    playlist->displaySongs();
                }
                else if (playlistOption == 4) {
                    Song mostPopularSong = getMostPopularSong(*playlist);
                    cout << "Most Popular Song: " << mostPopularSong.getTitle() << endl;
                }
                else if (playlistOption == 5) {
                    cout << "Returning to the main menu...\n";
                    break;
                }
                else {
                    cout << "Invalid option. Please try again.\n";
                }
            }
        }
        else if (option == 2) {
            for (int i = 0; i < playlists.size(); i++) {
                cout << "Playlist Name: " << playlists[i]->getName() << endl;
            }
        }
        else {
            cout << "Invalid option. Please try again.\n";
        }
    }

    // Clean up memory
    for (int i = 0; i < playlists.size(); i++) {
        delete playlists[i];
    }

    return 0;
}
