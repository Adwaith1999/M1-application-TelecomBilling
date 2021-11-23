**TEST PLAN:**

| **Various Telecom Testing** |                          **Testing activities in Telecom**                          |
| :---                        |                                                                                 :---|
|                             | 1) Verify, the telephone number of the customer is registered under telecom operator|
|                             | 2) Verify whether the number is still working                                       |
| **Billing System**          | 3) Verify the number entered is valid, and it is 10 digit number                    |                                                         
|                             | 4) Verify the number is not blocked due to some reasons                             |                                                     
|                             | 5)Verify the plan chosen by the customer displays on the billing system             |                                                              |                             | 6) Verify the total amount billed is accurate and mapped to the service offered     |
|                             | 1) Protocols, signaling, field testing for IOT                                      |                    
|                             | 2) Usage and Functional Testing for core Mobile handset applications                |
| **Application Testing**     | like a call, SMS, transfer/hold, etc.                                               |
|                             | 3) Testing of various applications like finance, sports and                         |
|                             | location-based services, etc. OSS-BSS testing                                       |
|                             | 1) Billing, customer case, interconnect billing, order and fraud management,        |
| **OSS-BSS Testing**         | revenue assurance                                                                   |
|                             | 2) Network management, mediation, provisioning, etc.                                |
|                             | 3) EAI, CRM & ERP, data warehousing, etc.                                           |
| **Conformance Testing**     | 1) Electrical interface compatibility                                               |
|                             | 2) Conformance of protocol & transport layer                                        |
|                             | 1) Interactive test scenarios                                                       |
| **IVR Testing**             | 2) Extensive conditional branching sequences                                        |
|                             | 3) Broadband audio tones                                                            |
|                             | 4) DTMF entries                                                                     |

**OUTPUT:**

| **Step No** |                               **Step Description**                             | **Expected Result**                                                     |
| :---        |     :---                                                                       |                                                                     :---|
| **Step 1**  | Validate that customer’s telephone number is registered under telecom operator | Customer’s telephone number should be registered with telecom operator  |
| **Step 2**  | Validate that the number is working and given number is of expected number of  | Telephone number should be of 10 digits and should be working           |
|             | digits (usually for mobile number, the digits are of 10 digits)                |                                                                         |
| **Step 3**  | Validate that the generated bill contains all accurate details of calls with   | The generated respective date and timebill should contain accurate      |
|             | date and time                                                                  | details with respective date and time                                   |
| **Step 4**  | Validate that customer has paid all existing bills, if not then show it on the | Existing un-paid bills should be displayed on front screen              |
|             | front screen as per business requirement                                       |                                                                         |


