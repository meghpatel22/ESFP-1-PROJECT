# Gram Panchayat Information & Certification System

A console-based C application that simulates an administrative system for a Gram Panchayat (village governing body). This project provides functionalities to view staff member details, add new user information, understand the services offered by the Panchayat, and generate official certificates for employees.

---

## 🛠 Features

- 🔐 **Admin Login System**: Secure access for viewing staff details and issuing certificates.
- 🧑‍💼 **Staff Directory**: Displays details of all Panchayat employees by name, age, branch, gender, and email.
- 📝 **User Data Entry**: Allows users to enter their personal information like name, DOB, and mobile number.
- 🏢 **Service List**: Describes various services offered by the Panchayat, such as:
  - Healthcare and hygiene
  - Road construction and maintenance
  - Primary education establishment
  - Agricultural and employment planning
- 🧾 **Certificate Generator**: Generates a professional certificate for current/former Panchayat employees based on entered data.

---

## 📷 Sample Output

On selecting different menu options, the application:
- Lists 20+ Panchayat staff members.
- Shows detailed service responsibilities.
- Generates a certificate with name, branch, and date.

---

## 🔐 Login Credentials

| Username | Password |
|----------|----------|
| ADMIN    | 12345    |

Required for:
- Viewing staff member details
- Issuing service certificates

---

## 🚀 How to Run

1. Compile the C file using any C compiler:
   ```bash
   gcc -o gram_panchayat_app yourfilename.c

2. Run the executable:
   ```bash
   ./gram_panchayat_app
