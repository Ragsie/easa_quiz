#include <vector>
#include "question.h"

std::vector<Question> getATA26Questions() {
    return {
        //ata 26
        {
            "In which aircraft areas must fire detection systems always be operative?",
            {"Engines and APU.", "Main wheel wells and avionics compartment only.", "Passenger cabin and cargo areas only."},
            "Engines and APU.",
            "Fire detection systems must always be operative in aircraft areas where fuel is burned, which are the engines and the APU.",
            "Think of the areas where fuel is actively combusted during operation."
        },
        {
            "What are the three main components that make up any fire and overheat detection system?",
            {"A sensor, a control unit, and warning panels.", "A bimetal switch, a squib, and a horn.", "A discharge head, a pressure bottle, and a relay."},
            "A sensor, a control unit, and warning panels.",
            "Every fire and overheat detection system architecture consists of a sensor in the monitored area, a control unit (primarily in the avionics compartment), and cockpit warning panels.",
            "Consider the path of detection from data gathering, processing, to pilot indication."
        },
        {
            "What type of sensor is commonly used only for pneumatic duct leak detection due to fault-monitoring limits?",
            {"The spot sensor (bi-metal switch type).", "The semiconductor continuous loop.", "The gas pressure continuous loop."},
            "The spot sensor (bi-metal switch type).",
            "A spot sensor is usually a bi-metal switch. It is only used for pneumatic duct leak detection because many individual sensors are needed for larger areas and defective sensors are not easy to detect.",
            "Think about simple thermal switches versus continuous loop designs."
        },
        {
            "How does a semiconductor fire sensor detect a fire or overheat condition?",
            {"Its electrical resistance decreases below a threshold as temperature rises.", "Its internal gas expands to press a diaphragm switch.", "A bimetal strip expands and breaks the continuity loop."},
            "Its electrical resistance decreases below a threshold as temperature rises.",
            "A semiconductor sensor consists of ceramic material with an NTC characteristic; as temperature increases, electrical resistance drops below 500 ohms to trigger an alarm.",
            "Remember that NTC stands for Negative Temperature Coefficient."
        },
        {
            "What is the typical normal resistance of a semiconductor continuous loop at ambient conditions?",
            {"Between 1 MOhm and 10 MOhm.", "Between 0 Ohm and 500 Ohm.", "Exactly 1.5 kOhm."},
            "Between 1 MOhm and 10 MOhm.",
            "Normal loop resistance in a cold environment ranges from 1 MOhm (long loops) to 10 MOhm (short loops) and drops below 500 Ohm in a fire.",
            "In normal conditions, current should not flow freely between the central wire and ground."
        },
        {
            "Why is a semiconductor fire detector loop connected as a closed loop back to the control unit?",
            {"To keep the system operative even in the event of a single loop interruption.", "To double the operating voltage supplied to the sensor.", "To balance ambient temperature variations across both ends."},
            "To keep the system operative even in the event of a single loop interruption.",
            "Connecting the end of the loop back to the control unit forms a closed loop, allowing it to remain fully operative despite one open circuit/break.",
            "Consider what would happen if a single cut occurred in an open loop."
        },
        {
            "What are the installation limits for semiconductor and pneumatic fire detector loops?",
            {"Max bending <= 3.2 mm and min bend radius >= 25.4 mm.", "Max bending <= 10 mm and min bend radius >= 50 mm.", "Max bending <= 1.5 mm and min bend radius >= 12.7 mm."},
            "Max bending <= 3.2 mm and min bend radius >= 25.4 mm.",
            "To avoid loop failures and mechanical damage, standard maintenance procedures specify a maximum allowable bend of 3.2 mm and a minimum bend radius of 25.4 mm.",
            "Think of small imperial standard fractions converted to metric (1/8 inch and 1 inch)."
        },
        {
            "In a Systron-Donner pneumatic pressure sensor, what is the role of the monitor (integrity) switch?",
            {"It remains closed by gas pressure; loss of pressure opens it, signaling a fault.", "It closes when temperature exceeds 400°C to activate the discharge squib.", "It resets the central master warning after a false overheat alert."},
            "It remains closed by gas pressure; loss of pressure opens it, signaling a fault.",
            "The monitor switch is normally held closed by internal gas pre-pressure (about 2x ambient). If the tube is severed or leaks, it opens, indicating a system fault.",
            "Integrity switches watch for loss of system containment/seal."
        },
        {
            "What happens in a pneumatic pressure sensor when a small localized spot is heated to over 400°C?",
            {"A discrete titanium element releases gas, increasing pressure to close the alarm switch.", "The outer tube melts and shorts out an internal grounding wire.", "A fusible alloy cap melts to vent the sensor tube pressure to ambient."},
            "A discrete titanium element releases gas, increasing pressure to close the alarm switch.",
            "A discrete element made of titanium releases additional gas when exposed to a local hot spot above 400°C, raising overall tube pressure to trip the alarm switch.",
            "Look for the chemical element used inside the tube to handle discrete hot spots."
        },
        {
            "In a dual-loop fire detection system, when will an alarm warning be triggered under normal conditions?",
            {"Only when both Loop A and Loop B detect fire simultaneously (AND logic).", "Whenever either Loop A or Loop B detects fire (OR logic).", "Only after the flight crew confirms the warning via the test panel."},
            "Only when both Loop A and Loop B detect fire simultaneously (AND logic).",
            "Dual-loop systems employ AND logic during normal operation to prevent false fire warnings caused by single sensor malfunctions.",
            "Dual systems prioritize eliminating false warnings while remaining fail-operational."
        },
        {
            "What happens in a dual-loop system if Loop A fails/faults while Loop B remains fully functional?",
            {"The control unit automatically switches to single loop mode using Loop B.", "The entire fire detection system is deactivated until replaced.", "The system immediately triggers a continuous master caution and fire bell."},
            "The control unit automatically switches to single loop mode using Loop B.",
            "Upon identifying a faulty loop (e.g. Loop A fault), the control unit automatically reconfigures to single-loop mode, enabling the healthy loop to trigger the warning.",
            "The system degrades gracefully to maintain flight safety back to base."
        },
        {
            "How does an optical smoke detector identify the presence of smoke in its measurement chamber?",
            {"Light from a beacon lamp is scattered by smoke onto a photo resistor (at 90 degrees).", "Smoke particles block a light beam constantly aimed straight at a solar cell.", "Smoke ionizes an internal air stream and increases electrical conductivity."},
            "Light from a beacon lamp is scattered by smoke onto a photo resistor (at 90 degrees).",
            "Under clear conditions, light is absorbed by the black chamber walls. When smoke enters, it reflects and scatters light onto the photo resistor, reducing its resistance and tripping the alarm.",
            "Remember the 90-degree refraction/scattering principle (Tyndall effect)."
        },
        {
            "Which radioactive isotope is utilized in ionization-type smoke detectors?",
            {"Americium-241.", "Cobalt-60.", "Uranium-235."},
            "Americium-241.",
            "Ionization smoke detectors utilize Americium-241 to emit radiation that ionizes air molecules flowing through the measurement chamber.",
            "It is an alpha emitter commonly used in low-level radioactive sensing devices."
        },
        {
            "Why do ionization smoke detectors include a sealed reference chamber alongside the measuring chamber?",
            {"To compensate for ambient air pressure and temperature changes.", "To supply extra radioactive ions if the primary emitter decays.", "To collect and store exhaust soot particles from the cabin."},
            "To compensate for ambient air pressure and temperature changes.",
            "A reference chamber unaffected by smoke is used to compensate for natural fluctuations in atmospheric pressure and temperature during flight.",
            "Think of differential measurement to eliminate environmental false positives."
        },
        {
            "Why are only the main wheel wells fitted with fire/overheat detection and not the nose wheel well?",
            {"Nose wheels do not have brakes that can overheat.", "Nose gear tires are made of inflammable solid composite rubber.", "Nose wheel wells have open continuous ram air ventilation in flight."},
            "Nose wheels do not have brakes that can overheat.",
            "Wheel well fire detection monitors for overheating brakes after retraction into the bay; because nose wheels normally do not have brakes, they do not require detection.",
            "Consider which wheels generate enormous friction heat upon landing."
        },
        {
            "What characterizes a Class C cargo compartment in aircraft design?",
            {"It is inaccessible in flight, ventilated, and requires both detection and extinguishing systems.", "It is accessible in flight and requires manual fire fighting only without installed systems.", "It is an unventilated small baggage hold requiring no built-in extinguishing."},
            "It is inaccessible in flight, ventilated, and requires both detection and extinguishing systems.",
            "Class C cargo compartments are underfloor or main deck compartments not accessible in flight; because they are ventilated, both fire detection and built-in extinguishing systems are mandatory.",
            "Inaccessible + ventilated = automatic detection and remote suppression required."
        },
        {
            "What is the extinguishing requirement for a Class E cargo compartment on a dedicated freighter?",
            {"Fire detection is required, but built-in extinguishing is not (ventilation can be shut off).", "A dual-shot automatic Halon 1301 flooding system is required.", "High-pressure automatic water sprinkler systems must be installed."},
            "Fire detection is required, but built-in extinguishing is not (ventilation can be shut off).",
            "Class E compartments are found on freighters; fire detection is mandatory, but extinguishing systems are not required because ventilation can be shut down to starve the fire of oxygen.",
            "Think of oxygen deprivation via ventilation cut-off on freighter main decks."
        },
        {
            "Which fire extinguishing agent is strictly forbidden for electrical fires due to conductive hazards?",
            {"Water.", "Halon 1211.", "Carbon Dioxide (CO2)."},
            "Water.",
            "Water has electrical conductivity and causes severe contamination, making it strictly suitable for Class A fires and dangerous on energized electrical equipment.",
            "Think about electrical conductivity."
        },
        {
            "What is the boiling point difference between Halon 1301 (BTM) and Halon 1211 (BCF)?",
            {"Halon 1301 boils at approx. -60°C, while Halon 1211 boils at approx. 0°C.", "Halon 1301 boils at +100°C, while Halon 1211 boils at -70°C.", "Both Halons have identical boiling points of -25°C."},
            "Halon 1301 boils at approx. -60°C, while Halon 1211 boils at approx. 0°C.",
            "Halon 1301 (BTM) boils at -60°C and vaporizes instantly as gas for fixed total flooding systems; Halon 1211 (BCF) boils at 0°C, spraying as a liquid stream from hand extinguishers up to 4m.",
            "One is designed for rapid volumetric expansion, the other for targeted stream reach."
        },
        {
            "What gas is used to pressurize fixed aircraft Halon fire extinguisher bottles, and to what pressure?",
            {"Nitrogen at approximately 600 psi at 20°C.", "Compressed air at 3000 psi at 0°C.", "Carbon dioxide at 150 psi at 15°C."},
            "Nitrogen at approximately 600 psi at 20°C.",
            "Extinguisher bottles store liquid Halon pressurized with dry nitrogen to about 600 psi (at 20°C) to ensure rapid and complete bottle discharge.",
            "An inert, dry gas is used at moderate pneumatic bottle storage pressure."
        },
        {
            "What is the maximum service life and total storage/operational life limit of an explosive discharge cartridge?",
            {"6 years service life after installation, and 10 years total from manufacture.", "2 years service life after installation, and 5 years total from manufacture.", "10 years service life after installation, and 15 years total from manufacture."},
            "6 years service life after installation, and 10 years total from manufacture.",
            "A discharge cartridge has an expiry date calculated from installation date plus 6 years service life, but cannot exceed 10 years from its manufacturing date.",
            "Think 6 years on-aircraft and a 10-year hard cap from the factory stamp."
        },
        {
            "Why must an electrostatic protective cap always be fitted when disconnecting an explosive cartridge squib?",
            {"To prevent accidental detonation caused by static electricity sparks.", "To stop Halon 1301 gas from escaping past the electrical connector pins.", "To shield the technician from harmful Americium-241 ionizing radiation."},
            "To prevent accidental detonation caused by static electricity sparks.",
            "Discharge cartridges are Class C explosives; an approved electrostatic cap prevents static discharge sparks from igniting the sensitive squib wire.",
            "Static discharge on squib pins can cause uncommanded explosive ignition."
        },
        {
            "What does the missing red disc on the fuselage exterior indicate?",
            {"The fire bottle has discharged overboard due to thermal overpressure.", "The fire bottle was discharged normally into the engine cowling by the flight crew.", "The lavatory waste container extinguisher was activated."},
            "The fire bottle has discharged overboard due to thermal overpressure.",
            "A red disc is blown out when a thermal relief fuse melts, directing expanding Halon overboard to prevent a container explosion from surrounding high heat.",
            "Red denotes overpressure relief to the outside environment."
        },
        {
            "What does a missing yellow disc on the aircraft fuselage exterior signify?",
            {"The fire bottle discharged normally via its spray nozzles into the protected compartment.", "A severe pneumatic duct leak blew the overpressure blow-out door open.", "The bottle pressure dropped below 50% due to cold atmospheric temperatures."},
            "The fire bottle discharged normally via its spray nozzles into the protected compartment.",
            "A yellow disc is ejected by a mechanical indicator piston when the bottle is intentionally fired into its engine/compartment spray line.",
            "Yellow confirms intentional or system nozzle discharge during flight/ground operation."
        },
        {
            "What actions occur automatically when an engine fire push button is pressed (or fire handle pulled)?",
            {"Closes fuel LP valve, closes hydraulic valve, closes bleed air valve, and trips the generator.", "Discharges both fire bottles immediately into the engine core.", "Dumps fuel from the affected wing tank and lowers the gear."},
            "Closes fuel LP valve, closes hydraulic valve, closes bleed air valve, and trips the generator.",
            "Actuating the engine fire control isolates all supplies feeding the fire (fuel, hydraulic fluid), trips electrical generation (GCR/GPR open), shuts bleed air valves, and arms the bottle squibs.",
            "Isolate all fuel, fluids, bleed air, and electrical generation prior to agent discharge."
        },
        {
            "Why are long-range aircraft cargo extinguishing systems fitted with a flow limiter on the second bottle?",
            {"To meter Halon slowly over 180+ minutes to compensate for compartment leakage.", "To reduce acoustic shock and prevent passenger ear trauma.", "To convert liquid Halon 1211 into gaseous Halon 1301 before entering the hold."},
            "To meter Halon slowly over 180+ minutes to compensate for compartment leakage.",
            "The first bottle creates an immediate high extinguishing concentration, while the second metered bottle maintains suppressive concentration levels against leakage for extended ETOPS diversion times.",
            "Think of maintaining critical agent concentration during a long 3-hour diversion."
        },
        {
            "How does a lavatory waste container fire extinguisher operate?",
            {"Automatically via a fusible end cap melting at approximately 80°C without electrical power.", "Electrically via an ionization smoke detector triggering a squib cartridge.", "Manually when the cabin attendant pulls a discharge ring on the outer door frame."},
            "Automatically via a fusible end cap melting at approximately 80°C without electrical power.",
            "Lavatory trash container extinguishers are completely autonomous, requiring no electricity; an alloy end cap melts at approx. 80°C, releasing Halon directly into the bin.",
            "It uses a purely thermal mechanical plug situated directly above the waste bin."
        },
        {
            "How do you inspect a lavatory fire extinguishing bottle that has no pressure gauge fitted?",
            {"Check the temperature plate; if the sensitive patch changed from grey to black, weigh the bottle.", "Submerge the discharge tube in soapy water to verify absence of bubbling.", "Measure squib circuit resistance with a high-voltage insulation megohmmeter."},
            "Check the temperature plate; if the sensitive patch changed from grey to black, weigh the bottle.",
            "When no gauge is installed, temperature patches indicate exposure to heat by turning black; a black patch mandates bottle removal and a precision gross weight check.",
            "Look for the irreversible color indicator patch attached to the mounting structure."
        },
        {
            "What safety precaution must be taken when performing a continuity/squib test on a discharge cartridge?",
            {"Use only AMM-approved test devices so current remains far below the firing threshold.", "Pre-heat the squib connection pins to 80°C to verify proper bimetal expansion.", "Disconnect the nitrogen pressurization manifold before inserting test leads."},
            "Use only AMM-approved test devices so current remains far below the firing threshold.",
            "Squib testing passes current through the bridging wire; excessive test currents from unapproved multimeters can heat the squib and accidentally detonate the cartridge.",
            "High measuring currents can exceed the squib fire limit and cause detonation."
        },
        {
            "What automatic safety feature occurs on modern aircraft if an APU fire is detected on the ground?",
            {"The APU automatically shuts down, sounds an external horn, and discharges the bottle.", "The APU increases bleed air output to blow out combustion chamber flames.", "The main landing gear brakes automatically apply full hydraulic locking pressure."},
            "The APU automatically shuts down, sounds an external horn, and discharges the bottle.",
            "For unattended ground operations, an APU fire triggers automatic shutdown, exterior wheel well horn/light warnings, and automated agent bottle discharge after a short time delay.",
            "Consider unattended operations where no crew is seated in the flight deck."
        }
    };
}