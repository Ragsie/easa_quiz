#include <vector>
#include "question.h"

std::vector<Question> getATA46Questions() {
    return {
        //ata 46
        {
            "What is the definition of ATA Chapter 46 (Information Systems)?",
            {"Units and components that furnish a means of storing, updating, and retrieving digital information traditionally provided on paper, microfilm, or microfiche.", "All flight deck display systems and general cockpit instrumentation responsible for primary flight indications.", "Only the physical network cables and routers that connect avionic systems directly to air traffic control ground radars."},
            "Units and components that furnish a means of storing, updating, and retrieving digital information traditionally provided on paper, microfilm, or microfiche.",
            "According to ATA Chapter 46 definition, it includes units dedicated to information storage and retrieval (e.g., Electronic Library mass storage and controller), but excludes shared units like general printers or primary flight displays.",
            "Think of paperless cockpit systems and digital replacements for paper flight bags."
        },
        {
            "Which of the following is NOT a standardized section in ATA Chapter 46?",
            {"46-10 Airplane General Information Systems", "46-20 Flight Deck Information Systems", "46-80 Primary Flight Control Computers"},
            "46-80 Primary Flight Control Computers",
            "The standard sections of Chapter 46 are 46-00 General, 46-10 Airplane General, 46-20 Flight Deck, 46-30 Maintenance, 46-40 Passenger Cabin, and 46-50 Miscellaneous Information Systems. Flight controls belong to ATA 27.",
            "Flight control computers belong to an entirely different ATA chapter."
        },
        {
            "What does ATIMS stand for in modern aircraft systems?",
            {"Air Traffic and Information Management System", "Air Transport Interface and Monitoring Standard", "Air Traffic Integrated Messaging Server"},
            "Air Traffic and Information Management System",
            "ATIMS stands for Air Traffic and Information Management System and enables datalink communication between the aircraft and ground centers.",
            "It focuses on managing both Air Traffic and digital Information."
        },
        {
            "Which two main types of applications does the ATSU router manage?",
            {"ATC (Air Traffic Control) and AOC (Airline Operational Control)", "FBW (Fly-By-Wire) and FADEC (Full Authority Digital Engine Control)", "TCAS surveillance and GPWS audio warnings"},
            "ATC (Air Traffic Control) and AOC (Airline Operational Control)",
            "The ATSU (Air Traffic Service Unit) is a router that provides datalink services for ATC (Air Traffic Control) and AOC (Airline Operational Control) applications.",
            "Think of air traffic management combined with airline company operations."
        },
        {
            "What unit does the modern ATSU replace compared to older generation aircraft?",
            {"ACARS Management Unit (MU)", "Flight Warning Computer (FWC)", "Central Maintenance Computer (CMC)"},
            "ACARS Management Unit (MU)",
            "The ATSU replaces the ACARS Management Unit which was installed in aircraft that did not have modern Flight Deck Information Systems.",
            "It replaces the dedicated box previously managing ACARS datalink."
        },
        {
            "What are the three main communication media managed by the ATSU for air/ground datalink?",
            {"VHF (VDR), HF (HFDR), and SATCOM", "GSM 5G, Wi-Fi 6, and Bluetooth", "Microwave Landing System, DME, and VOR"},
            "VHF (VDR), HF (HFDR), and SATCOM",
            "ATSU manages the datalink communication over VHF Data Radio (VDR), High-Frequency Data Radio (HFDR), and Satellite Communication (SATCOM).",
            "Recall standard aeronautical long-range and line-of-sight radio bands plus satellite."
        },
        {
            "What does the acronym FANS stand for?",
            {"Future Air Navigation System", "Flight Automation and Network Standard", "Full Aircraft Navigation Suite"},
            "Future Air Navigation System",
            "FANS stands for Future Air Navigation System, established under the ICAO CNS/ATM concept.",
            "It represents the future of air navigation."
        },
        {
            "What concept did ICAO define in 1983 for the safe and efficient handling of future air traffic?",
            {"CNS/ATM (Communication, Navigation, Surveillance / Air Traffic Management)", "ACARS NextGen Architecture", "EASA Part-66 Digital Avionics Framework"},
            "CNS/ATM (Communication, Navigation, Surveillance / Air Traffic Management)",
            "ICAO published the CNS/ATM concept in 1983 to provide a framework for future air traffic growth and capacity.",
            "Look for the four-letter acronym covering Communication, Navigation, and Surveillance."
        },
        {
            "Why did traditional voice position reports require large aircraft separation over oceans (e.g., 48,000 NM²)?",
            {"Relay voice communication delays took 20 to 45 minutes and were prone to human misunderstandings.", "High-frequency radio signals damaged GPS satellite receivers.", "Radar stations could only detect aircraft once every two hours."},
            "Relay voice communication delays took 20 to 45 minutes and were prone to human misunderstandings.",
            "Traditional spoken reports via HF relay stations suffered from severe time delays (20-45 minutes) and potential voice errors, necessitating massive safety margins.",
            "Consider the latency and clarity of voice messages sent across HF relay stations."
        },
        {
            "How often can a FANS-equipped aircraft automatically transmit its position and intent via satellite/datalink?",
            {"At least every five minutes", "Only once per hour", "Only when requested manually by the pilot pressing the transmit switch"},
            "At least every five minutes",
            "FANS-equipped aircraft automatically deliver position, heading/track, speed, and altitude via datalink/satellite at least every 5 minutes.",
            "It happens automatically at a short, fixed multi-minute interval."
        },
        {
            "What is a key economic and operational advantage of FANS?",
            {"Reduced aircraft separation, dynamic meteorological flight plan optimization, and lower fuel burn.", "Complete elimination of primary flight displays in the cockpit.", "Automatic landing on any unpaved runway without GPS."},
            "Reduced aircraft separation, dynamic meteorological flight plan optimization, and lower fuel burn.",
            "FANS permits reduced separation, direct routing, dynamic in-flight weather optimization, and fewer altitude step-downs, significantly cutting fuel consumption.",
            "Think about airspace capacity, direct routes, and fuel savings."
        },
        {
            "In FANS-A and FANS-B cockpits, what dedicated interface is installed exclusively for ATC datalink messages?",
            {"DCDU (Datalink Control & Display Unit)", "MCDU (Multipurpose Control and Display Unit)", "ECAM Engine/Warning Display"},
            "DCDU (Datalink Control & Display Unit)",
            "The DCDUs are the dedicated interfaces for ATC messages only, featuring display screens and crew response pushbuttons.",
            "Look for the dedicated datalink control unit located right above or near the main instruments."
        },
        {
            "What visual indicator illuminates in the cockpit upon receiving an incoming ATC datalink message?",
            {"ATC MSG attention getter pushbuttons", "MASTER CAUTION red light only", "ENGINE FAULT annunciator"},
            "ATC MSG attention getter pushbuttons",
            "Two illuminated pushbuttons marked 'ATC MSG' provide the flight crew with a visual alert upon receiving an ATC message.",
            "It contains the specific text label of the message type."
        },
        {
            "What is the function of the 'VIEW OFFSIDE' switch on an EFB Display Module (DM)?",
            {"It transfers the image from the opposite EFB Display Module to the user's own display.", "It reboots the ATSU datalink router immediately.", "It switches the primary engine instruments to the captain's tablet."},
            "It transfers the image from the opposite EFB Display Module to the user's own display.",
            "The VIEW OFFSIDE switch allows a pilot to view the content being displayed on the other pilot's EFB Display Module.",
            "The name indicates viewing the opposite (off-side) screen."
        },
        {
            "How does the Radio Management Panel (RMP) interact with VDR3 when in voice mode?",
            {"When RMP controls VDR3 frequency, only voice mode is available, and frequency is set in the ACTIVE window.", "VDR3 automatically sends high-speed ACARS data packets over the active voice channel.", "The ATSU disables all HF and SATCOM transmissions completely."},
            "When RMP controls VDR3 frequency, only voice mode is available, and frequency is set in the ACTIVE window.",
            "When an RMP controls the VDR3 frequency directly, it places VDR3 into voice mode and displays the active frequency in the ACTIVE window.",
            "Setting a frequency directly on the RMP makes it a dedicated voice transceiver."
        },
        {
            "When the ATSU controls the VDR3 frequency, how is voice mode accessed if needed?",
            {"Through the ATSU menu on the MCDU", "By turning off the aircraft battery master switch", "By pulling the ATSU circuit breaker"},
            "Through the ATSU menu on the MCDU",
            "When ATSU controls the VDR3 frequency, voice mode can be selected and accessed through the ATSU menu on the MCDU.",
            "The MCDU ATSU menu controls the data/voice port allocation."
        },
        {
            "What standard protocol is used on ARINC 429 data buses connecting the ATSU to peripheral avionic computers?",
            {"ARINC 429 Data Transparent Protocol (ARINC 619/618)", "Standard IEEE 802.11 Wi-Fi frames", "Uncompressed analogue audio modulation"},
            "ARINC 429 Data Transparent Protocol (ARINC 619/618)",
            "The ATSU uses the ARINC 429 data transparent protocol (with ARINC 618/619 framing) to communicate with on-board avionics systems.",
            "It uses the standard aviation data-bus format with transparent framing."
        },
        {
            "Which computer provides the ATSU with UTC date and time?",
            {"MMR 2 (Multi Mode Receiver)", "Cabin Intercommunication Data System (CIDS)", "Flight Augmentation Computer (FAC)"},
            "MMR 2 (Multi Mode Receiver)",
            "The ATSU receives the UTC date and time through output bus 3 of the Multi-Mode Receiver 2 (MMR 2).",
            "The Multi Mode Receiver contains the GPS receiver providing precise time reference."
        },
        {
            "What does the LGCIU discrete signal provide to the ATSU and DCDU?",
            {"Air / Ground status of the aircraft", "Nose wheel steering angle", "Hydraulic reservoir quantity"},
            "Air / Ground status of the aircraft",
            "The Landing Gear Control Interface Unit (LGCIU) supplies discrete air/ground status to the ATSU and both DCDUs.",
            "Landing gear position indicates whether the aircraft is flying or on ground."
        },
        {
            "What happens when the 'AUDIT' function is active in the ATSU Maintenance Menu?",
            {"It automatically prints all downlink and/or uplink datalink messages that pass through the ATSU.", "It permanently wipes the failure memory of the last 63 flight legs.", "It disconnects the aircraft from all satellite constellations."},
            "It automatically prints all downlink and/or uplink datalink messages that pass through the ATSU.",
            "The AUDIT page allows automatic printing of datalink traffic (VHF3, SATCOM, HFDR, uplinks, downlinks) passing through the router. It is OFF by default.",
            "Audit creates an automatic hard-copy log of all communications."
        },
        {
            "How many flight legs of failure history does the ATIMS BITE memorize?",
            {"The last 63 flight legs", "Only the last 2 flight legs", "Up to 500 flight legs"},
            "The last 63 flight legs",
            "The ATIMS BITE records internal ATSU and external interface fault messages for the previous 63 flight legs.",
            "It's a power-of-two minus one value (64 - 1)."
        },
        {
            "Which two modes does the ATIMS BITE operate in?",
            {"NORMAL mode and MENU mode", "ACTIVE flight mode and PASSIVE ground mode", "ANALOG mode and DIGITAL mode"},
            "NORMAL mode and MENU mode",
            "The ATIMS BITE operates in NORMAL mode (continuous monitoring during operation) and MENU mode (interactive maintenance testing and reporting).",
            "One is background monitoring, the other is accessed via menus."
        },
        {
            "What is checked during the ATSU SYSTEM TEST initiated from the MCDU?",
            {"DCDU self-tests and ATSU internal tests (ARINC, RAM, EPROM, EEPROM, CPU core, discretes).", "Only the external paint reflectivity and antenna radome heating.", "Physical tyre pressure and engine oil levels."},
            "DCDU self-tests and ATSU internal tests (ARINC, RAM, EPROM, EEPROM, CPU core, discretes).",
            "The SYSTEM TEST performs comprehensive internal tests of ATSU processors, memories, ARINC I/O, discrete lines, and initiates DCDU display test screens.",
            "It tests all internal microcontrollers, memories, and datalink displays."
        },
        {
            "What physical cable type is used for full-duplex Ethernet in the Airbus A380 Open World?",
            {"Quadrax (Quad) cable", "Single-core copper coaxial cable", "Unshielded ribbon cable"},
            "Quadrax (Quad) cable",
            "In the A380 Open World, Ethernet communication utilizes high-speed Quadrax (Quad) cables as the physical transmission medium.",
            "Four-conductor high-speed avionic ethernet cabling."
        },
        {
            "What is the commercial package name for Airbus Open World functions?",
            {"FlySmart with Airbus (FSA)", "Airbus Flight Navigator Pro", "Total Cockpit Connected Suite"},
            "FlySmart with Airbus (FSA)",
            "Airbus offers all functions of the open world in a package designated 'FlySmart with Airbus' (FSA).",
            "It combines the brand 'FlySmart' with the manufacturer name."
        },
        {
            "What are the two primary subsystems of FlySmart with Airbus (FSA)?",
            {"AINS (Aircraft Information Network System) and CINS (Cabin Information Network System)", "FADEC (Full Authority Digital Engine Control) and EIU (Engine Interface Unit)", "ADIRU (Air Data Inertial Reference Unit) and MMR (Multi-Mode Receiver)"},
            "AINS (Aircraft Information Network System) and CINS (Cabin Information Network System)",
            "FSA is partitioned into AINS (maintenance & flight ops / avionics domain) and CINS (cabin crew & passenger services domain).",
            "One system covers the aircraft/avionics, the other covers the cabin."
        },
        {
            "What is the role of the SIU (Server Interface Unit) in the AINS architecture?",
            {"It acts as a secure firewall/interface between the open world and the avionics world, hosting sensitive software.", "It modulates VHF voice signals into analogue audio for passenger headphones.", "It replaces the cockpit flight controls during automated taxiing."},
            "It acts as a secure firewall/interface between the open world and the avionics world, hosting sensitive software.",
            "The SIU is the core of the AINS safety policy; it isolates avionics systems from open-world interference and converts ARINC 429 to Ethernet.",
            "Think of server interfacing, protocol conversion, and avionics security protection."
        },
        {
            "When is the TWLU (Terminal Wireless LAN Unit) allowed to operate?",
            {"Only while the aircraft is on the ground", "Continuously throughout the entire cruise flight", "Only during high-speed descent below FL100"},
            "Only while the aircraft is on the ground",
            "The TWLU bridges the aircraft ELAN to the airport ground network via wireless RF and operates only while the aircraft is on the ground.",
            "Airport wireless gate connections are restricted to ground operations."
        },
        {
            "What is the primary function of the ANSU (Aircraft Network Server Unit)?",
            {"Provides mass data/file storage, hosts airline applications, and manages the Ethernet LAN (ELAN).", "Directly drives the hydraulic actuators for primary flight surfaces.", "Receives analog voice signals from the cockpit voice recorder."},
            "Provides mass data/file storage, hosts airline applications, and manages the Ethernet LAN (ELAN).",
            "The ANSU is an open-world server that manages the ELAN, hosts airline applications, and provides mass storage for software and electronic manuals.",
            "It is the main server for aircraft applications and data storage."
        },
        {
            "How is a Class 1 EFB characterized?",
            {"Commercial off-the-shelf laptop, not mounted, no interface to avionics, and not usable during takeoff and landing.", "Permanently installed hardware built directly into the aircraft instrument panel by the OEM.", "Dedicated ARINC 600 rack-mounted flight control computer."},
            "Commercial off-the-shelf laptop, not mounted, no interface to avionics, and not usable during takeoff and landing.",
            "Class 1 EFBs are portable off-the-shelf devices, not mounted to the airframe, have no avionic connectivity, and cannot be used during critical flight phases (takeoff/landing).",
            "Entry-level loose portable consumer hardware."
        },
        {
            "How is a Class 2 EFB characterized?",
            {"Fix mounted with docking station, connected to avionics (read-only), and usable during all flight phases.", "Loose tablet stored in the seat pocket without any power connection.", "Integrated modular avionics rack certified under DAL A for primary navigation only."},
            "Fix mounted with docking station, connected to avionics (read-only), and usable during all flight phases.",
            "Class 2 EFBs use mounted docking stations, interface with aircraft power and avionics (typically read-only ARINC 429), and are certified for all flight phases.",
            "Mounted with docking station and read-only avionic bus inputs."
        },
        {
            "How is a Class 3 EFB characterized?",
            {"Fixed installation integrated into cockpit avionics by the aircraft manufacturer, usable in all flight phases.", "A personal smartphone connected via consumer Bluetooth to the ATSU.", "An external ground-based server accessible only after landing at the gate."},
            "Fixed installation integrated into cockpit avionics by the aircraft manufacturer, usable in all flight phases.",
            "Class 3 EFBs are fully integrated avionic systems installed by the OEM, featuring maximum system integration but higher certification and life-cycle costs.",
            "The highest level of OEM avionics integration."
        },
        {
            "What avionic interface limitation is strictly enforced on Class 2 EFB Laptop Docking Stations?",
            {"The ARINC 429 interfaces to aircraft systems (ADIRU, FMGC) are limited to 'read-only'.", "No Ethernet communication is permitted with ground networks.", "Power must only be supplied by internal disposable lithium 9V batteries."},
            "The ARINC 429 interfaces to aircraft systems (ADIRU, FMGC) are limited to 'read-only'.",
            "To prevent any potential corruption of flight-critical systems, all avionic bus connections (e.g. from ADIRU or FMGEC) to the EFB docking station are strictly read-only.",
            "Data can only flow INTO the EFB, never backwards into flight computers."
        },
        {
            "What safety and power protection feature is incorporated into the Laptop Docking Station (LDS)?",
            {"The DC-output power relay only closes when the power cable is properly connected to the laptop.", "The LDS releases halon fire extinguishing gas if temperatures exceed 30°C.", "The LDS automatically ejects the laptop if ground speed exceeds 100 knots."},
            "The DC-output power relay only closes when the power cable is properly connected to the laptop.",
            "To enable DC output, the laptop power cable must be physically plugged into the laptop to close the internal power relay.",
            "The power circuit senses cable connection before switching on DC power."
        },
        {
            "What is the definition and operational impact of a Class 1 Failure?",
            {"Class 1 failures have an operational consequence on the flight and are indicated to the crew in flight via ECAM/EICAS or local cockpit warnings.", "Class 1 failures have zero operational impact and remain completely invisible until shop overhaul.", "Class 1 failures only relate to cabin inflight entertainment system glitches."},
            "Class 1 failures have an operational consequence on the flight and are indicated to the crew in flight via ECAM/EICAS or local cockpit warnings.",
            "Class 1 faults directly affect flight operations and are annunciated to the flight crew in flight via ECAM/EICAS displays and cockpit warning/caution lights.",
            "The most critical fault class that requires immediate crew awareness."
        },
        {
            "Where can maintenance personnel display Class 1 failures on the MCDU?",
            {"In the LAST (or CURRENT) LEG REPORT and LAST LEG ECAM REPORT", "Only in the AOC Airline Fuel Consumption menu", "Exclusively on the GPS receiver configuration page"},
            "In the LAST (or CURRENT) LEG REPORT and LAST LEG ECAM REPORT",
            "Class 1 failures are accessed on the MCDU via the Centralized Fault Display System (CFDS) in the Last/Current Leg Report and ECAM Report.",
            "Look for the leg reports within the maintenance BITE menus."
        },
        {
            "What is the operational consequence of a Class 2 Failure?",
            {"They have no immediate operational consequence during flight, but are displayed on request on the ECAM STATUS page after engine shutdown.", "They cause immediate autopilot disconnection and forced diversion to the nearest alternate airport.", "They immediately discharge the emergency cockpit oxygen masks."},
            "They have no immediate operational consequence during flight, but are displayed on request on the ECAM STATUS page after engine shutdown.",
            "Class 2 faults do not have immediate operational consequences in flight and can be reviewed on the ECAM STATUS page after flight/engine shutdown.",
            "Secondary faults that become visible after the engines are shut down."
        },
        {
            "What is the operational consequence and maintenance dispatch rule for a Class 3 Failure?",
            {"They have no operational consequences, all systems remain available, and they can be left uncorrected until the next scheduled maintenance check.", "The aircraft is immediately grounded and must not depart under any circumstances.", "The flight crew must perform an immediate air turn-back to the departure airport."},
            "They have no operational consequences, all systems remain available, and they can be left uncorrected until the next scheduled maintenance check.",
            "Class 3 failures have zero operational consequence, affect non-critical redundancies, are viewed on the MCDU Avionics Status page, and can wait until routine scheduled checks.",
            "Minor faults that can wait until the next planned scheduled hangar check."
        },
        {
            "Which parameters are acquired by the ATSU from the Flight Management System (FMS)?",
            {"Origin/destination airport, flight number, fuel on board, navigation files for ADS, and CPDLC messages.", "Cabin temperature, galley oven power settings, and passenger seatbelt sign status.", "Engine fire bottle squib resistance and emergency slide deployment pressure."},
            "Origin/destination airport, flight number, fuel on board, navigation files for ADS, and CPDLC messages.",
            "The FMS interface provides essential operational parameters to the ATSU including flight plan details, fuel on board, navigation trajectory for ADS, and CPDLC routing.",
            "Flight plan information, navigation parameters, and fuel numbers."
        },
        {
            "In the A380 Network Server System (NSS), what are the three distinct domains?",
            {"Avionics Domain, Flight Operations Domain, and Communication & Cabin Domain", "Navigation Domain, Propulsion Domain, and Hydraulic Domain", "Line Maintenance Domain, Workshop Domain, and Pilot Training Domain"},
            "Avionics Domain, Flight Operations Domain, and Communication & Cabin Domain",
            "The NSS architecture divides the open world into three functional domains: Avionics (maintenance & manuals), Flight Operations (electronic flight bag apps), and Communication & Cabin (passenger & cabin crew services).",
            "Recall the three areas: technical avionics, flight ops, and cabin/passengers."
        }
    };

}