#include <vector>
#include "question.h"

std::vector<Question> getATA44Questions() {
    return {
        // ata 44
        {
            "Where is the cabin layout configuration data and system properties centrally stored in the CIDS?",
            {"In the Cabin Assignment Module (CAM).", "In the Central Fault Display Interface Unit (CFDIU).", "In the Audio Management Unit (AMU)."},
            "In the Cabin Assignment Module (CAM).",
            "According to the CIDS general description, changes to the cabin layout only require software modifications, and this configuration software is centrally stored in the Cabin Assignment Module (CAM).",
            "Think of the module plugged into the panel that assigns cabin layout and seat mapping."
        },
        {
            "How do the two CIDS Directors operate together under normal aircraft conditions?",
            {"Both operate simultaneously sharing the bus load 50/50.", "They are wired in parallel; one actively controls while the other is in hot standby.", "Director 1 controls passenger functions while Director 2 controls crew functions."},
            "They are wired in parallel; one actively controls while the other is in hot standby.",
            "The two CIDS Directors are identical and wired in parallel. One director actively controls the CIDS while the second remains in hot standby ready to take over.",
            "Consider standard aviation redundancy architecture where a backup unit is powered and ready immediately."
        },
        {
            "Which type of Decoder/Encoder Unit (DEU) interfaces with the Passenger Service Units (PSUs) and passenger lighted signs?",
            {"DEU Type B via middle-line data bus.", "DEU Type A via top-line data bus.", "DEU Type C via Ethernet backbone."},
            "DEU Type A via top-line data bus.",
            "DEU Type A connects to the CIDS Directors via top-line data buses and controls passenger-related functions including PSUs, reading lights, loudspeakers, and passenger signs.",
            "Remember that passenger functions use 'Type A' units on the top lines."
        },
        {
            "How is redundancy achieved on the CIDS top-line bus connecting DEU Type A units?",
            {"By using a closed fiber-optic ring loop along both sides.", "Two twisted pairs along each side connect alternate DEUs.", "Every DEU has four direct parallel cables to Director 1 and Director 2."},
            "Two twisted pairs along each side connect alternate DEUs.",
            "For redundancy, two twisted pairs run along each side of the cabin connecting alternate DEUs. A single break only disables every other DEU A on that side.",
            "Think of an alternating (skip-one) connection layout across two separate twisted pair lines."
        },
        {
            "What prevents a DEU Type A from being mistakenly installed onto a DEU Type B mount?",
            {"Software pin programming rejecting the MAC address.", "Different color-coded electrical connectors.", "Mechanical index pins unique to each mount type."},
            "Mechanical index pins unique to each mount type.",
            "The mounts for Type A and Type B DEUs are mechanically polarized using specific index pins that prevent installing a Type A unit onto a Type B mount.",
            "Look for physical/mechanical keying features on the mounting bracket."
        },
        {
            "Which color indication on the Area Call Panel (ACP) denotes a call coming from the cockpit?",
            {"Blue", "Amber", "Pink"},
            "Pink",
            "The ACP standard color coding is: Amber for lavatory call/smoke, Green for attendant call, Pink for cockpit call, and Blue for passenger call.",
            "Remember: Blue is PAX, Amber is Lavatory, Green is Attendant, and Pink is Flight Crew."
        },
        {
            "What display format is used on the Attendant Indication Panel (AIP)?",
            {"Full-color LCD graphic display with 320x240 pixels.", "Two rows of alphanumerical characters, each with 16 characters.", "A single scrolling dot-matrix LED line of 32 characters."},
            "Two rows of alphanumerical characters, each with 16 characters.",
            "The AIP features an alphanumerical display area consisting of two rows with 16 characters each, accompanied by green and red indicator LEDs.",
            "It is a compact text display with 2 lines of 16 letters/digits."
        },
        {
            "What happens automatically to the PA announcement volume when an engine is running?",
            {"It remains constant but activates noise cancellation.", "It is automatically increased by +6 dB.", "It is boosted by +12 dB only in the forward galley."},
            "It is automatically increased by +6 dB.",
            "When an engine is running (oil pressure signal valid), the CIDS Director automatically adjusts the PA volume by +6 dB to compensate for cabin ambient noise.",
            "Look for the exact decibel increase specified for engine run condition (+6 dB)."
        },
        {
            "What is the priority sequence for Passenger Address (PA) sources in CIDS?",
            {"1: Flight compartment, 2: Cabin attendant stations, 3: PRAM, 4: Boarding music/IFE.", "1: PRAM, 2: Flight compartment, 3: Cabin attendant stations, 4: Boarding music.", "1: Cabin attendant, 2: Flight compartment, 3: EVAC horn, 4: PRAM."},
            "1: Flight compartment, 2: Cabin attendant stations, 3: PRAM, 4: Boarding music/IFE.",
            "PA source priority in CIDS is defined as: 1st priority = Flight deck, 2nd priority = Cabin attendant stations, 3rd priority = Pre-recorded announcements (PRAM), 4th priority = Boarding music/entertainment.",
            "The cockpit always possesses the highest override authority for audio broadcasting."
        },
        {
            "Under what operational condition does the Service Interphone automatically connect to external ground jacks?",
            {"When the aircraft electrical network is switched off.", "When landing gear is down and compressed or ground power is connected.", "Whenever any cabin door is armed."},
            "When landing gear is down and compressed or ground power is connected.",
            "In automatic mode, the LGCIU sends a ground signal to CIDS when landing gear is down and compressed (or external ground power contactor closed). Otherwise, SVCE INT OVRD must be pressed.",
            "Think of the weight-on-wheels (WoW) condition or ground power connection."
        },
        {
            "What constitutes a CIDS Class 1 fault?",
            {"Failure of a single reading light power supply or one AIP display.", "Failure of both directors, 50% of DEU As, 20% adjacent DEU As zone-wise, or all DEU Bs with handsets.", "A communication timeout on ARINC 429 between PRAM and FAP."},
            "Failure of both directors, 50% of DEU As, 20% adjacent DEU As zone-wise, or all DEU Bs with handsets.",
            "A CIDS Class 1 fault is an operational system failure indicated on the ECAM, triggered by total director loss, extensive DEU A failure, or loss of all DEU Bs equipped with handsets.",
            "Class 1 faults are the most critical and result in cockpit ECAM warnings."
        },
        {
            "How is a CIDS Class 1 CAB (Cabin) fault annunciated to the crew?",
            {"ECAM warning chime and red master warning in the cockpit.", "Amber CIDS CAUT light on the FAP without ECAM cockpit display.", "Audio buzzer at all attendant stations with flashing pink ACP."},
            "Amber CIDS CAUT light on the FAP without ECAM cockpit display.",
            "Class 1 CAB faults (such as slide bottle pressure low or drain mast failure) illuminate the amber CAUT light on the FAP without generating an ECAM message in the cockpit.",
            "It affects cabin operations only and illuminates the caution light on the FAP."
        },
        {
            "Which test functions can ONLY be accessed from the Forward Attendant Panel (FAP) and NOT from the MCDU?",
            {"Passive director test and printer report output.", "Emergency light system test, battery capacity test, drain mast heater test, and active director reset.", "BITE memory clear and ARINC bus line impedance test."},
            "Emergency light system test, battery capacity test, drain mast heater test, and active director reset.",
            "While MCDU and FAP share most BITE menus, emergency light tests, battery capacity checks, drain mast heater tests, and active director resets are exclusive to the FAP.",
            "Think of cabin-specific safety equipment tests that must be executed directly inside the cabin."
        },
        {
            "In the Boeing ACESS system, which controller manages reading lights, call lights, and passenger information signs?",
            {"Passenger Address Controller (PAC)", "Entertainment/Service Controller (ESC)", "Cabin Interphone Controller (CIC)"},
            "Entertainment/Service Controller (ESC)",
            "In ACESS architecture, the ESC (Entertainment/Service Controller) controls both the Passenger Entertainment System (PES) and the Passenger Services System (PSS).",
            "The controller name combines entertainment and service functions into one unit."
        },
        {
            "What is the role of the Local Area Controller (LAC) in the ACESS architecture?",
            {"It serves as the main master computer replacing the CMU in flight.", "It acts as an interface distributing digital and analog data between main controllers and cabin units (OEUs/SEUs).", "It directly controls fuel and hydraulic cabin isolation valves."},
            "It acts as an interface distributing digital and analog data between main controllers and cabin units (OEUs/SEUs).",
            "The LAC interfaces the ACESS main controllers (CIC, PAC, ESC, CSM) with cabin LRUs including Overhead Electronics Units (OEUs) and Seat Electronics Units (SEUs).",
            "Consider the LAC as the local regional distributor bridging central controllers and cabin rows."
        },
        {
            "What is the functional difference between an Inboard OEU (I-OEU) and an Outboard OEU (O-OEU) in ACESS?",
            {"O-OEUs handle fiber optics while I-OEUs handle copper cables.", "I-OEUs contain additional reading/call light outputs and an independent card for Passenger Address.", "I-OEUs are only installed in cargo compartments."},
            "I-OEUs contain additional reading/call light outputs and an independent card for Passenger Address.",
            "The I-OEU has up to 8 reading light and 4 row call outputs (compared to 6 and 2 in O-OEU) and integrates an independent Passenger Address card connected to speakers.",
            "The inboard version is equipped with the audio amplifier circuitry for PA speakers."
        },
        {
            "What happens to cabin lighting in ACESS during a cabin depressurization event?",
            {"All cabin lighting is turned off to save battery power.", "Ceiling and sidewall lights are automatically switched to full bright intensity.", "Lighting begins flashing amber at 2 Hz across all cabin zones."},
            "Ceiling and sidewall lights are automatically switched to full bright intensity.",
            "A discrete decompression input overrides any manual selections on the Cabin System Module (CSM) and forces all ceiling and sidewall wash lights to 100% bright illumination.",
            "Safety protocol dictates maximum visibility for passengers in emergency depressurization."
        },
        {
            "Which network protocol topology is utilized by Lufthansa Technik's NICE cabin management system?",
            {"Token Ring topology running over ARINC 629.", "Spanning Tree Protocol with Ethernet Switching Units (ESU) and a 1 Gbit/s backbone.", "Pure Star bus without alternate routing capabilities."},
            "Spanning Tree Protocol with Ethernet Switching Units (ESU) and a 1 Gbit/s backbone.",
            "The nice system uses an IP-based architecture based on Spanning Tree Protocol, connecting Ethernet Switching Units (ESUs) via a 1 Gbit/s backbone for fast alternate loop routing.",
            "It is a standard IT network protocol used to avoid switching loops while maintaining redundancy."
        },
        {
            "Which Digital Rights Management (DRM) and streaming foundation is utilized in the BoardConnect wireless IFE?",
            {"Apple FairPlay and QuickTime streaming.", "Microsoft PlayReady DRM and Microsoft Silverlight.", "Widevine Classic with Adobe Flash player."},
            "Microsoft PlayReady DRM and Microsoft Silverlight.",
            "Lufthansa Systems' BoardConnect is built upon Microsoft PlayReady Digital Rights Management (DRM) and Microsoft Silverlight / BC-App client frameworks.",
            "Think of Microsoft's enterprise DRM solution."
        },
        {
            "In the Airbus A380 IFE system, what occurs automatically during a cabin decompression?",
            {"The entire IFE rack is unpowered by circuit breakers.", "The IFE system switches automatically to Stand-By mode, leaving only PA override and PSS active.", "The moving map is forced onto all Seat Display Units (SDUs)."},
            "The IFE system switches automatically to Stand-By mode, leaving only PA override and PSS active.",
            "Upon receiving a decompression signal from OSCU/CIDS, the IFE immediately enters Stand-By mode, cutting passenger entertainment and keeping PA override and PSS operative.",
            "Entertainment shuts down so passengers can hear announcements and use service units."
        },
        {
            "How many cameras are installed as standard in the Cockpit Door Surveillance System (CDSS)?",
            {"1 pan-tilt-zoom camera in the cockpit ceiling.", "3 video cameras (one above the cockpit door with IR lighting and two in the Door-1 ceiling).", "6 digital high-definition cameras throughout the galley."},
            "3 video cameras (one above the cockpit door with IR lighting and two in the Door-1 ceiling).",
            "The CDSS comprises 3 black-and-white cameras: Camera 1 above the door with infrared lighting, Camera 2 in the RH Door-1 area, and Camera 3 in the LH Door-1 area.",
            "One is above the cockpit door facing out, and two cover the left/right entry vestibules."
        },
        {
            "What capability does the A380 Cabin Video Monitoring System (CVMS) provide for event storage via the FAP?",
            {"Cabin crew can command saving the last 5 minutes of a selected camera to a dedicated USB drive in the DAU.", "It records 24 hours continuously onto cockpit Solid State Voice Recorders.", "It live-streams all 15 camera channels to air traffic control via VHF data link."},
            "Cabin crew can command saving the last 5 minutes of a selected camera to a dedicated USB drive in the DAU.",
            "Using the FAP interface, cabin attendants can trigger an event archive saving the previous 5 minutes of recorded video from a chosen camera onto the DAU USB memory drive.",
            "It allows retroactively capturing a 5-minute incident clip."
        },
        {
            "What type of transmission bearer is used by the Passenger Air-to-Ground Telephone System (PATS)?",
            {"HF Data Link transceivers.", "Aircraft Satellite Communication (SATCOM) system via CEPT-E1 links.", "Direct terrestrial GSM base station links only."},
            "Aircraft Satellite Communication (SATCOM) system via CEPT-E1 links.",
            "PATS connects onboard Seat Telephony Boxes (STBs) through the Cabin Telephone Unit (CTU) to the SATCOM system using digital CEPT-E1 ISDN links.",
            "Air-to-ground voice channels worldwide require satellite links."
        },
        {
            "What terminating resistance is installed at the end of the PATS cabin distribution cable assembly?",
            {"Two 50 Ohms termination resistors.", "Two 100 Ohms termination resistors.", "A single 600 Ohms audio balancing transformer."},
            "Two 100 Ohms termination resistors.",
            "The PATS cabin distribution cable assembly is terminated at its end with a termination connector containing two 100 Ohms resistors for correct line impedance matching.",
            "Two identical 100-ohm resistors ensure line impedance matching."
        },
        {
            "How many simultaneous telephone calls can the PATS system support when fully configured?",
            {"Up to 24 calls.", "Up to 210 simultaneous calls (with up to 500 handsets installed).", "Strictly limited to 4 flight deck priority calls."},
            "Up to 210 simultaneous calls (with up to 500 handsets installed).",
            "The PATS technical performance data indicates capacity for up to 500 handsets, 210 simultaneous calls, and up to 10 simultaneous conference calls.",
            "Look for the large capacity figure over 200 concurrent calls."
        }
    };
}