-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Sep 20, 2023 at 03:40 PM
-- Server version: 10.4.28-MariaDB
-- PHP Version: 8.2.4

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `eyeclinic`
--

-- --------------------------------------------------------

--
-- Table structure for table `patients`
--

CREATE TABLE `patients` (
  `SERIAL` int(5) NOT NULL,
  `NAME` varchar(20) DEFAULT NULL,
  `GENDER` varchar(5) DEFAULT NULL,
  `AGE` int(5) DEFAULT NULL,
  `PROBLEM` varchar(40) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `patients`
--

INSERT INTO `patients` (`SERIAL`, `NAME`, `GENDER`, `AGE`, `PROBLEM`) VALUES
(1, 'AHNAF', 'M', 22, 'STYE'),
(2, 'ROOHI', 'F', 22, 'SWELLING'),
(3, 'TAHA', 'M', 21, 'CONJUNCTIVITIS'),
(4, 'AHAD', 'M', 47, 'GLAUCOMA'),
(5, 'MARWA', 'F', 11, 'ITCHING'),
(6, 'SHAHRIAR', 'M', 21, 'SWELLING'),
(7, 'SAKIF', 'M', 27, 'MYOPIA'),
(8, 'RAIYAN', 'M', 20, 'MYOPIA'),
(9, 'FARHANA', 'F', 31, 'STYE'),
(11, 'TARABIH', 'F', 17, 'ITCHING'),
(12, 'ISMI', 'F', 12, 'MYOPIA');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `patients`
--
ALTER TABLE `patients`
  ADD PRIMARY KEY (`SERIAL`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
