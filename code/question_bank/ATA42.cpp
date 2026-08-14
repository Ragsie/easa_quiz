#include <vector>
#include "question.h"

std::vector<Question> getATA42Questions() {
    return {
    //ata 42
    {
    "Which transmission method defines simplex or multi-simplex point-to-point data transfer with a single transmitter and up to 20 receivers?",
    {"ARINC 629", "ARINC 429", "AFDX (ARINC 664)"},
    "ARINC 429",
    "ARINC 429 uses a simplex (mono-directional) twisted and shielded pair of wires where one transmitter can broadcast data to a maximum of 20 receivers.",
    "Think of the classic aviation standard using 32-bit words and point-to-point wiring."
    },
    {
        "What data collision handling principle is utilized in ARINC 629 data bus networks?",
        {"Token Ring passing", "CSMA/CD (Carrier Sense Multiple Access with Collision Detection)", "Master-Slave polling"},
        "CSMA/CD (Carrier Sense Multiple Access with Collision Detection)",
        "ARINC 629 relies on the CSMA/CD principle: each terminal listens first (carrier sense) and stops transmitting immediately if a collision is detected.",
        "It is compared to polite people at a meeting who listen before speaking."
    },
    {
        "What is the standard transmission mode used by ARINC 629?",
        {"Simplex", "Half-Duplex", "Full-Duplex"},
        "Half-Duplex",
        "ARINC 629 defines Half-Duplex-Operation as a standard where LRUs transmit in sequence over a shared bus cable using current-mode couplers.",
        "Data moves bidirectionally over the same twisted pair, but only one terminal transmits at a time."
    },
    {
        "How many LRUs can be connected to a single ARINC 629 data bus loop?",
        {"Up to 20 LRUs", "Up to 31 LRUs", "Up to 120 LRUs"},
        "Up to 120 LRUs",
        "ARINC 629 supports up to 120 line replaceable units (LRUs) sharing a single bidirectional bus.",
        "It connects far more devices than the 20-receiver limit of ARINC 429."
    },
    {
        "What physical hardware coupler is used to connect an LRU to the ARINC 629 bus cable without cutting the core wires?",
        {"Inductive spark plug", "Current-mode coupler", "Optical prism splitter"},
        "Current-mode coupler",
        "Each LRU uses a current-mode coupler along with a stub cable to couple data to and from the ARINC 629 bus cable.",
        "It couples current signals onto the bus magnetically."
    },
    {
        "What transmission mode and speed are defined under AFDX (ARINC 664)?",
        {"Full-Duplex at 100 Mbit/s", "Half-Duplex at 2 Mbit/s", "Simplex at 1 Mbit/s"},
        "Full-Duplex at 100 Mbit/s",
        "AFDX (Avionics Full-Duplex Switched Ethernet) standardizes full-duplex operation at 100 Mbit/s using dedicated transmit and receive wire pairs via switches.",
        "It uses switched Fast Ethernet technology."
    },
    {
        "Why is the CSMA/CD mechanism unnecessary in a fully configured AFDX network?",
        {"Because it uses optical token rings", "Because dedicated full-duplex point-to-point links and switches eliminate a shared medium", "Because a master fire-control computer assigns time slots"},
        "Because dedicated full-duplex point-to-point links and switches eliminate a shared medium",
        "Since each station connects to a central switch via dedicated transmit/receive lines (point-to-point), there is no shared bus collisions to detect.",
        "Think about what switches and dedicated TX/RX pairs eliminate."
    },
    {
        "What redundancy policy is implemented by destination subscribers receiving packets across AFDX Network A and Network B?",
        {"First valid data wins", "Average of both packets", "Secondary network is strictly cold standby"},
        "First valid data wins",
        "Each subscriber transmits identical data over both redundant networks (A and B). The receiving subscriber processes the first valid arriving frame and discards duplicates.",
        "The fastest arriving uncorrupted packet is used."
    },
    {
        "On the Boeing 777, what type of OLAN connector is used for production breaks that are not frequently disconnected?",
        {"Type-A in-line (butt type) connector", "Type-B expanded beam (ball lens) connector", "BNC coaxial bayonet connector"},
        "Type-A in-line (butt type) connector",
        "The Type-A connector is a multi-channel, in-line butt-type connector offering very low light loss, intended for production breaks.",
        "It provides lower light loss than the ball lens expanded beam type."
    },
    {
        "What type of fiber optic connector is used to attach cables to LRUs on the B777 for frequent mating cycles?",
        {"Type-A butt connector", "Type-B expanded beam (ball lens) connector", "RJ45 modular jack"},
        "Type-B expanded beam (ball lens) connector",
        "Type-B connectors use expanded beam (ball lens) optical design, which accommodates frequent connection and disconnection.",
        "It uses lenses to expand and refocus the light beam."
    },
    {
        "What is the minimum bend radius specified for the fiber optic cables used in the B777 OLAN?",
        {"0.5 inches", "1.5 inches", "5.0 inches"},
        "1.5 inches",
        "The technical documentation mandates a minimum bend radius of 1.5 inches to prevent optical signal degradation or fiber damage.",
        "It is between 1 and 2 inches."
    },
    {
        "What safety precaution must be taken before opening fiber optic connectors?",
        {"Clean them with tap water", "Disconnect cable from equipment on both ends or switch off attached systems", "Ground the optical core with copper wire"},
        "Disconnect cable from equipment on both ends or switch off attached systems",
        "Laser light emitted is invisible to the human eye but intense enough to cause serious retinal eye damage.",
        "Invisible laser radiation is hazardous to eyesight."
    },
    {
        "In Integrated Modular Avionics, what is the primary structural difference compared to conventional federated avionics?",
        {"Each computer only hosts one dedicated analogue function", "Multiple software applications are combined and hosted inside shared Core Processing Modules (CPMs/LRMs)", "Avionics are replaced entirely by mechanical linkages"},
        "Multiple software applications are combined and hosted inside shared Core Processing Modules (CPMs/LRMs)",
        "Traditional avionics allocate one LRU per function. IMA integrates multiple software applications into shared modular processing units (CPMs/LRMs).",
        "Think modular software consolidation into common hardware."
    },
    {
        "What backplane bus architecture is utilized inside the Boeing 777 AIMS cabinet to link CPMs and IOMs?",
        {"ARINC 429", "SAFEbus (operating at 60 Mbits/sec)", "RS-232 serial bus"},
        "SAFEbus (operating at 60 Mbits/sec)",
        "The Boeing 777 AIMS cabinet incorporates a fault-tolerant SAFEbus backplane operating at 60 Mbits/sec connecting CPMs and IOMs.",
        "It is a specialized high-speed deterministic bus with 'SAFE' in its name."
    },
    {
        "How many total Current Mode ARINC 629 buses are utilized across various systems on the Boeing 777?",
        {"Up to 4 buses", "Up to 11 buses", "Up to 24 buses"},
        "Up to 11 buses",
        "The B777 utilizes up to 11 ARINC 629 buses: 3 Flight Control buses, 4 System buses, and 4 Inter-Cabinet buses.",
        "Combine 3 flight control + 4 system + 4 inter-cabinet buses."
    },
    {
        "What are the two electrical power supplies feeding the Boeing 747-400 MAWEA card file?",
        {"28V DC Battery Bus & APU Generator Bus", "115V AC Standby Bus (Supply A) & First Officer's 115V AC Transfer Bus (Supply B)", "115V AC Ground Service Bus & Static Inverter Bus"},
        "115V AC Standby Bus (Supply A) & First Officer's 115V AC Transfer Bus (Supply B)",
        "Power supply A is fed from the 115V AC Standby bus, and power supply B is fed from the First Officer's 115V AC Transfer bus.",
        "One is on Standby power, the other on the FO's Transfer bus."
    },
    {
        "Which card type in the B747-400 MAWEA is part of the flight recorder system and does NOT generate warnings?",
        {"Universal Logic Card (ULC)", "Aural Synthesizer Card (ASC)", "Digital Flight Data Acquisition Card (DFDAC)"},
        "Digital Flight Data Acquisition Card (DFDAC)",
        "The DFDAC is responsible for collecting data for the flight recorder and does not have any flight deck warning function.",
        "Look for the card associated with 'Flight Data Acquisition'."
    },
    {
        "How are stall and configuration warning manual tests initiated on the B747 MAWEA monitor panel?",
        {"By sending an AFDX software command", "By manually grounding the particular test jack", "By applying +28V DC directly to the monitor pin"},
        "By manually grounding the particular test jack",
        "The MAWEA monitor panel has test jacks (L STALL, R STALL, T/O CONFIG, LDG CONFIG) initiated by grounding the respective jack.",
        "Think about pulling the test line to ground potential."
    },
    {
        "How is data isolation maintained between the A380 Avionics World and Open World?",
        {"Direct unshielded RS-232 links", "Firewalls", "Physical disconnection during flight"},
        "Firewalls",
        "Firewalls protect critical flight avionics by controlling and filtering all communication between the ADCN and the Open World (NSS/OIS).",
        "Security boundary devices used to prevent unauthorized data transfer."
    },
    {
        "How many Core Processing Input/Output Modules (CPIOMs) and non-interchangeable types are installed on an Airbus A380?",
        {"10 CPIOMs across 2 types", "22 CPIOMs across 7 different types", "46 CPIOMs of 1 universal type"},
        "22 CPIOMs across 7 different types",
        "The A380 has 22 CPIOMs installed, divided into 7 distinct types that are not interchangeable with one another.",
        "22 total units categorized into 7 functional variants."
    },
    {
        "How many Input/Output Modules (IOMs) are installed on the Airbus A380 to interface non-AFDX LRUs?",
        {"4 IOMs", "8 IOMs", "16 IOMs"},
        "8 IOMs",
        "The A380 installs 8 dedicated Input/Output Modules (IOMs) to bridge non-AFDX equipment to the ADCN network.",
        "Exactly eight modules."
    },
    {
        "How many AFDX switches are deployed across the Airbus A380 ADCN network?",
        {"2 switches", "8 switches per network (16 switches total)", "120 switches"},
        "8 switches per network (16 switches total)",
        "The A380 ADCN connects over 120 subscribers using 16 AFDX switches split equally across Network A and Network B (8 each).",
        "16 total switches connecting duplicated networks."
    },
    {
        "What standard computer bus architecture is used as the internal backplane for the Generic Modular Avionics Cabinet (MAC)?",
        {"Standard PCI bus structure", "CAN bus structure", "Mil-Std-1553 serial bus"},
        "Standard PCI bus structure",
        "The MAC internal backplane is a parallel, bidirectional high-speed bus using the standard PCI architecture found in personal computers.",
        "The widely adopted PC expansion bus."
    },
    {
        "What is the function of the Stability Augmentation Module (SAM) in a generic IMA cabinet on a fixed-wing aircraft?",
        {"Engine fuel metering", "Mach trim and yaw damper functions", "Cabin altitude rate control"},
        "Mach trim and yaw damper functions",
        "When the autopilot is disengaged, the SAM provides axis stability, handling Mach trim and yaw damping in airplanes.",
        "It stabilizes rotation axes without autopilot engaged."
    },
    {
        "Why is only one Central Maintenance Computer (CMC) LRM typically fitted in MAC 1 rather than duplicated in MAC 2?",
        {"Because MAC 2 lacks power supplies", "Because CMC is not flight-critical / essential for safe flight", "Because ARINC 629 cannot transmit maintenance data"},
        "Because CMC is not flight-critical / essential for safe flight",
        "The CMC is dedicated to maintenance diagnostics and fault logging; since it is not flight-safety critical, single redundancy suffices.",
        "Non-essential systems do not require full dual-cabinet duplication."
    },
    {
        "What primary applications utilize the fiber optic OLAN in the Airbus A380 cabin and video systems?",
        {"Bleed air temperature regulation", "ETACS (External and Taxiing Aid Camera System) and IFE (In-Flight Entertainment)", "Landing gear extension actuators"},
        "ETACS (External and Taxiing Aid Camera System) and IFE (In-Flight Entertainment)",
        "Due to very high bandwidth capabilities, fiber optics on the A380 are utilized for video data such as ETACS cameras and passenger IFE.",
        "Think high-bandwidth camera feeds and entertainment video."
    },
    {
        "Which bus system originally developed by Bosch for automotive functions is used on the A380 for door and switch control?",
        {"EIB", "CAN (Controller Area Network) bus", "LON"},
        "CAN (Controller Area Network) bus",
        "The CAN bus, operating up to 1 Mbit/s over twisted duplex wiring, is used on the A380 to monitor and control doors and switches.",
        "Commonly abbreviated as CAN."
    },
    {
        "What was the approximate weight reduction achieved on the Boeing 787 by implementing IMA LRMs over classic LRUs?",
        {"Approximately 100 kg", "Nearly 1,000 kg", "Over 10,000 kg"},
        "Nearly 1,000 kg",
        "By replacing discrete LRU chassis, duplicate power supplies, and point-to-point harnesses with IMA LRMs, Boeing saved nearly 1000 kg.",
        "Around 1 metric ton of weight savings."
    },
    {
        "What is the purpose of the Network Server System (NSS) in the A380 Open World?",
        {"To execute flight control control laws", "To host the Onboard Information System (OIS) across 3 sub-network domains", "To directly actuate main gear steering valves"},
        "To host the Onboard Information System (OIS) across 3 sub-network domains",
        "The NSS hosts the OIS across the avionics domain, flight-operations domain, and communication/cabin domain in the Open World.",
        "It runs non-critical documentation and operational software domains."
    },
    {
        "What is the data rate and word length of a standard High-Speed ARINC 429 bus?",
        {"100 Kbit/s and 32 bits", "2 MBit/s and 20 bits", "100 Mbit/s and 64 bytes"},
        "100 Kbit/s and 32 bits",
        "High-Speed (HS) ARINC 429 operates at 100 Kbit/s with a fixed word length of 32 bits per message.",
        "100 kilobits per second with 32-bit words."
    }
};

}