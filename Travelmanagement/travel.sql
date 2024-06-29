-- Step 1: Create the Database
CREATE DATABASE IF NOT EXISTS TRAVEL_MANAGEMENT_APPLICATION;

-- Step 2: Use the Database
USE TRAVEL_MANAGEMENT_APPLICATION;

-- Step 3: Create the Hotels Table
CREATE TABLE IF NOT EXISTS Hotels (
    HotelID INT PRIMARY KEY AUTO_INCREMENT,
    HotelName VARCHAR(255),
    OwnerName VARCHAR(255),
    Location VARCHAR(255),
    AvgPricePerRoom DECIMAL(10, 2),
    ReviewPoint DECIMAL(3, 2)
);

-- Step 4: Create the CabDrivers Table
CREATE TABLE IF NOT EXISTS CabDrivers (
    DriverID INT PRIMARY KEY AUTO_INCREMENT,
    DriverName VARCHAR(255),
    PricePerKilometer DECIMAL(10, 2),
    Rating DECIMAL(3, 2),
    CarName VARCHAR(255),
    CarPlateNumber VARCHAR(20)
);

-- Step 5: Insert Records into the Hotels Table
INSERT INTO Hotels (HotelName, OwnerName, Location, AvgPricePerRoom, ReviewPoint) VALUES 
('Kathmandu Suite', 'Nirmal Shrestha', 'Kathmandu, Nepal', 7500.00, 8.5),
('Pokhara Lake View', 'Anjali Gurung', 'Pokhara, Nepal', 6000.00, 9.0),
('Chitwan Safari Lodge', 'Rajendra Thapa', 'Chitwan, Nepal', 5000.00, 8.8),
('Lumbini Peace Inn', 'Kiran Yadav', 'Lumbini, Nepal', 5500.00, 7.9),
('Everest Base Camp Retreat', 'Sangita Sherpa', 'Solukhumbu, Nepal', 9500.00, 9.2),
('Bhaktapur Heritage Hotel', 'Prajwal Shrestha', 'Bhaktapur, Nepal', 4000.00, 8.7),
('Nagarkot Mountain View', 'Rita Tamang', 'Nagarkot, Nepal', 4500.00, 9.1),
('Janakpur Dham Inn', 'Suresh Mahato', 'Janakpur, Nepal', 3500.00, 8.3),
('Bandipur Village Resort', 'Manju Gurung', 'Bandipur, Nepal', 5000.00, 7.8),
('Dhulikhel Panorama', 'Kumar Khatri', 'Dhulikhel, Nepal', 6500.00, 9.0),
('Tansen Hillside Hotel', 'Anita Rana', 'Tansen, Nepal', 4000.00, 9.4),
('Gorkha Heritage Lodge', 'Raju Gurung', 'Gorkha, Nepal', 5500.00, 8.6);

-- Step 6: Insert Records into the CabDrivers Table
INSERT INTO CabDrivers (DriverName, PricePerKilometer, Rating, CarName, CarPlateNumber) VALUES 
('Ram Bahadur', 20.00, 4.5, 'Toyota Prius', 'BA 2 JA 1234'),
('Shyam KC', 18.50, 4.7, 'Honda Civic', 'BA 3 GA 5678'),
('Gopal Magar', 22.00, 4.3, 'Suzuki Swift', 'BA 1 PA 3456'),
('Krishna Gurung', 21.00, 4.8, 'Hyundai i20', 'BA 5 DA 9876'),
('Kumar Thapa', 19.00, 4.6, 'Nissan Micra', 'BA 4 KA 8765'),
('Mina Shrestha', 23.00, 4.4, 'Ford Figo', 'BA 7 MA 6543'),
('Rita Rai', 20.50, 4.7, 'Tata Nexon', 'BA 6 HA 5432'),
('Sita Lama', 21.50, 4.9, 'Mahindra KUV100', 'BA 8 BA 7654'),
('Sunita Magar', 19.50, 4.5, 'Kia Seltos', 'BA 9 LA 8764'),
('Anjali Tamang', 22.50, 4.2, 'Volkswagen Polo', 'BA 1 NA 2345'),
('Raju Shrestha', 20.00, 4.6, 'Honda City', 'BA 2 BA 1236'),
('Kiran Thapa', 18.75, 4.7, 'Hyundai Creta', 'BA 3 PA 9875');
