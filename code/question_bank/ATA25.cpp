#include <vector>
#include "question.h"

std::vector<Question> getATA25Questions() {
    return {
    {
    "According to CS 25.1421, what requirement must be met if a megaphone is installed in the aircraft?",
    {"It must have an automatic continuous acoustic beacon.", "A restraining means must be provided that withstands ultimate inertia forces specified in CS 25.561.", "It must be powered by the main DC bus with an integrated charging cradle."},
    "A restraining means must be provided that withstands ultimate inertia forces specified in CS 25.561.",
    "CS 25.1421 states that if a megaphone is installed, a restraining means must be provided that is capable of restraining the megaphone when subjected to ultimate inertia forces under emergency landing conditions (CS 25.561).",
    "Focus on safety during emergency landings and keeping equipment securely tied down."
    },
    {
        "Under CS 25.1423, for how long must the Public Address (PA) system remain powerable following total loss of normal power generation?",
        {"At least 30 minutes total, including 15 minutes of continuous announcements.", "At least 10 minutes total, including an aggregate duration of at least 5 minutes of announcements.", "At least 5 minutes total in standby mode only."},
        "At least 10 minutes total, including an aggregate duration of at least 5 minutes of announcements.",
        "CS 25.1423 specifies that after shutdown/failure of all engines/APU or normal power sources, the PA system must remain powerable for at least 10 minutes, including at least 5 minutes of announcements by crew.",
        "Recall the 10-minute total rule and the 5-minute aggregate speaking time."
    },
    {
        "What is the maximum allowable time for a cabin crew station PA system to become operable after removing the microphone from stowage?",
        {"Within 3 seconds.", "Within 10 seconds.", "Immediately within 0.5 seconds."},
        "Within 3 seconds.",
        "CS 25.1423 mandates that the PA system must be capable of operation within 3 seconds from the time a microphone is removed from its stowage by a cabin crew member.",
        "Think of a quick single-digit second requirement (< 5s)."
    },
    {
        "According to CS 25.1423, which areas inside the aircraft must the Public Address system be intelligible to?",
        {"Only the main passenger cabin seating rows.", "All passenger seats, lavatories, and cabin crew member seats and work stations.", "Passenger seats and the flight deck only."},
        "All passenger seats, lavatories, and cabin crew member seats and work stations.",
        "CS 25.1423 dictates that PA announcements must be intelligible at all passenger seats, lavatories, and cabin crew member seats and work stations.",
        "Emergency instructions must reach every occupant, even those in enclosed cubicles."
    },
    {
        "What design feature is required by CS 25.1423 regarding un-stowed or unused microphones?",
        {"An un-stowed microphone must automatically disconnect the flight deck priority.", "No unused, un-stowed microphone shall render the Public Address system inoperative.", "An un-stowed microphone must emit a warning chime after 30 seconds."},
        "No unused, un-stowed microphone shall render the Public Address system inoperative.",
        "The regulation ensures that if a microphone drops or is left out of its cradle, it cannot block or disable the rest of the PA system.",
        "Think of fault tolerance if a handset falls off during turbulence."
    },
    {
        "How must the Public Address (PA) system interact with the crew member interphone system according to CS 25.1423?",
        {"It must share the exact same amplifiers to reduce aircraft weight.", "It must be capable of functioning independently of any required crew member interphone system.", "It must automatically override all ground communications."},
        "It must be capable of functioning independently of any required crew member interphone system.",
        "CS 25.1423 specifies that the PA system must be capable of functioning independently of any required crew member interphone system to avoid single point of failure.",
        "Safety regulations require segregation between internal crew talk and public broadcasting."
    },
    {
        "How many flight-crew member stations in the pilot compartment must have immediate access to the Public Address system?",
        {"At least one station.", "Each of two flight-crew member stations.", "All flight-crew stations including observer seats."},
        "Each of two flight-crew member stations.",
        "According to CS 25.1423, the PA system must be accessible for immediate use from each of two flight-crew member stations in the pilot compartment.",
        "Both Captain and First Officer positions must have direct, immediate access."
    },
    {
        "Under what condition may one microphone serve more than one floor-level emergency exit according to CS 25.1423?",
        {"If the exits are on opposite sides of the fuselage on wide-body aircraft.", "Provided the proximity of the exits allows unassisted verbal communications between seated cabin crew members.", "Only if wireless auxiliary microphones are supplied."},
        "Provided the proximity of the exits allows unassisted verbal communications between seated cabin crew members.",
        "CS 25.1423 allows one microphone to serve adjacent floor-level exits only if the distance allows unassisted verbal communication between seated cabin crew.",
        "Think about whether crew members can talk to each other without electronics."
    },
    {
        "According to the MMEL item 23-31-01 for the A318/A319/A320/A321, what is the required number of operative Passenger Address systems for dispatch?",
        {"0 installed, 0 required.", "1 installed, 1 required (Must be operative).", "2 installed, 1 required with relief."},
        "1 installed, 1 required (Must be operative).",
        "The MMEL table explicitly states: Number installed: 1, Number required: 1, Rectification Interval: '-' with requirement 'Must be operative.'",
        "Check the MMEL entry table: 1 installed, 1 required."
    },
    {
        "Under the MMEL 23-31-01A for the A320 family, what alert on the Engine/Warning Display (EWD) indicates total failure of the PA system that is NOT permitted?",
        {"COM CIDS 1+2 FAULT", "AUDIO PA AMP 1 FAULT", "CABIN INT COMM INOP"},
        "COM CIDS 1+2 FAULT",
        "Note 2 of MMEL 23-31-01A states: Total failure of the passenger address system (indicated by the COM CIDS 1+2 FAULT alert displayed on the EWD) is not permitted.",
        "Look for the dual Cabin Intercommunication Data System fault acronym on EWD."
    },
    {
        "What does Note 1 of the MMEL item 23-31-01 specify regarding partial failure of the Passenger Address system?",
        {"The aircraft must be grounded immediately.", "Refer to the item(s) of the affected system(s).", "The flight crew must carry two battery-operated megaphones."},
        "Refer to the item(s) of the affected system(s).",
        "Note 1 of MMEL 23-31-01 states: In the case of partial failure of the passenger address system, refer to the item(s) of the affected system(s).",
        "Look at cross-referencing sub-components in the MEL/MMEL."
    },
    {
        "Which EASA Part-66 module and ATA chapter cover Electronic Emergency Equipment and Furnishings?",
        {"Module 11A / ATA 21", "Module 13 / ATA 25 (Equipment and Furnishing)", "Module 15 / ATA 33"},
        "Module 13 / ATA 25 (Equipment and Furnishing)",
        "The training manual title is M13.06 Equipment and Furnishing (ATA 25) under EASA Part-66 Category B2.",
        "Module 13 deals with Aircraft Aerodynamics, Structures and Systems, with ATA 25 covering Cabin Equipment."
    },
    {
        "Which inertia force specification applies to restraining megaphones under emergency landing conditions?",
        {"CS 25.1423", "CS 25.561", "CS 25.853"},
        "CS 25.561",
        "CS 25.1421 references CS 25.561 (Emergency Landing Conditions) for structural restraint forces.",
        "CS 25.561 is the certification standard for emergency landing emergency inertia loads."
    },
    {
        "How is the standby power duration requirement defined for the PA system when other safety-essential loads share the same source?",
        {"Standby is strictly limited to 60 minutes.", "An additional time duration in its standby state appropriate/required for other safety-essential loads.", "Standby is not permitted; the system must shut off after 10 minutes."},
        "An additional time duration in its standby state appropriate/required for other safety-essential loads.",
        "CS 25.1423 states that in addition to 10 min operation (5 min speech), standby duration must be appropriate for all other essential emergency loads sharing the power source.",
        "Safety loads sharing emergency busbars determine the required standby budget."
    },
    {
        "Does MMEL 23-31-01 for the A320 family allow operation with a placard if the PA system is inoperative?",
        {"Yes, with placard 'PA INOP'.", "No placard is applicable because the system must be operative.", "Yes, provided flight time is under 1 hour."},
        "No placard is applicable because the system must be operative.",
        "Under MMEL 23-31-01A, the Placard column specifies 'No', and the condition states 'Must be operative.'",
        "No dispatch relief means no placard procedure for total inoperation."
    },
    {
        "In the context of CS 25.1423, which passenger areas must receive intelligible PA announcements in addition to main seats?",
        {"Cargo holds and avionics bay.", "Lavatories.", "Wheel wells and external service areas."},
        "Lavatories.",
        "CS 25.1423 explicitly includes lavatories along with passenger seats and crew workstations to ensure passenger safety.",
        "Consider passenger areas where doors can be closed."
    },
    {
        "Why must an un-stowed microphone not disable the aircraft PA system?",
        {"To prevent cabin crew from playing music inadvertently.", "To ensure flight deck or other cabin stations can still broadcast emergency instructions if one mic hangs loose.", "To save battery power when grounded."},
        "To ensure flight deck or other cabin stations can still broadcast emergency instructions if one mic hangs loose.",
        "If a microphone is loose during rapid decompression or crash landing, other stations must still be able to transmit emergency PA announcements.",
        "Think about redundant broadcast availability during severe cabin disruption."
    },
    {
        "Which system on the Airbus A320 family processes and manages the Passenger Address audio lines?",
        {"CIDS (Cabin Intercommunication Data System)", "FCPC (Flight Control Primary Computer)", "BSCU (Braking and Steering Control Unit)"},
        "CIDS (Cabin Intercommunication Data System)",
        "The MMEL indicates total failure via 'COM CIDS 1+2 FAULT', showing CIDS is the core system managing PA communications.",
        "Look at the acronym CIDS in Note 2 of the MMEL extract."
    },
    {
        "What certification basis governs the large airplane electronic emergency equipment requirements presented?",
        {"CS-23", "CS-25", "CS-29"},
        "CS-25",
        "The excerpts from the manual refer directly to CS-25 (CS 25.1421 and CS 25.1423) for Large Aeroplanes.",
        "CS-25 applies to large transport category civil aircraft."
    },
    {
        "What is the required microphone provision for a floor-level emergency exit with an adjacent cabin crew seat?",
        {"A shared headset linked to the interphone only.", "A readily accessible microphone for the seated cabin crew member.", "A wall-mounted loudspeaker with automatic feedback canceler."},
        "A readily accessible microphone for the seated cabin crew member.",
        "CS 25.1423 requires a microphone readily accessible to the seated cabin crew member for each required floor-level emergency exit.",
        "The crew member must be able to reach the microphone while strapped into the jumpseat."
    },
    {
        "Under CS 25.1423, what aggregate speaking duration is mandated out of the 10-minute emergency operation window?",
        {"At least 2 minutes.", "At least 5 minutes.", "At least 8 minutes."},
        "At least 5 minutes.",
        "The rule specifies an aggregate time duration of at least 5 minutes of announcements made by flight and cabin crew members.",
        "Half of the 10-minute minimum duration must support active speech."
    },
    {
        "What alert on the A320 EWD is explicitly referenced in the MMEL regarding the PA system?",
        {"ENG ALL ENGINES FAIL", "COM CIDS 1+2 FAULT", "NAV FMGC FAULT"},
        "COM CIDS 1+2 FAULT",
        "MMEL 23-31-01A Note 2 explicitly highlights the 'COM CIDS 1+2 FAULT' warning on the EWD.",
        "The fault code combines Communication and Cabin Intercommunication Data System."
    },
    {
        "Can an aircraft be dispatched with a total failure of the PA system under standard MMEL 23-31-01?",
        {"Yes, for up to 3 flight days.", "No, total failure is not permitted.", "Yes, if flights are conducted below 10,000 feet."},
        "No, total failure is not permitted.",
        "MMEL 23-31-01 states 'Must be operative' and Note 2 confirms total failure is not permitted.",
        "Look at the 'Nbr required' vs 'Nbr installed' columns."
    },
    {
        "Under CS 25.1423, if all engines and APUs shut down in flight, what must supply power to the PA system for emergency announcements?",
        {"Direct mechanical hand-crank generators.", "Emergency electrical power sources / batteries.", "Bleed air-driven cooling turbines only."},
        "Emergency electrical power sources / batteries.",
        "Emergency batteries or independent emergency power sources power essential communication equipment when all generators fail.",
        "Think of backup electrical sources that remain live after all generators trip."
    },
    {
        "What does the acronym EWD stand for in the context of the A320 flight deck display mentioned in the MMEL?",
        {"Emergency Warning Director", "Engine / Warning Display", "Electronic Wiring Diagram"},
        "Engine / Warning Display",
        "EWD stands for Engine/Warning Display, the upper ECAM screen where COM CIDS 1+2 FAULT warnings appear.",
        "It is the primary engine and alert display unit on Airbus flight decks."
    },
    {
        "What authority compliance standards are referenced in the cover of the Lufthansa Technical Training manual?",
        {"FAA Part 147 only", "EASA Part-66; UAE GCAA CAR 66; CAAS SAR-66", "ICAO Annex 1 only"},
        "EASA Part-66; UAE GCAA CAR 66; CAAS SAR-66",
        "The training document compliance list includes EASA Part-66, UAE GCAA CAR 66, and CAAS SAR-66.",
        "Check the top left compliance box on the title page of the document."
    },
    {
        "What is the category rating specified on the title page of the training manual M13.06?",
        {"Category A", "Category B1", "Category B2"},
        "Category B2",
        "The training manual header specifies 'Category B2' and 'Topics for Cabin Base Electrician/Mechanic'.",
        "B2 is the avionics and electrical aircraft maintenance engineer license category."
    },
    {
        "Under CS 25.1423, what is required regarding pilot compartment PA access?",
        {"Accessible only from the overhead maintenance panel.", "Accessible for immediate use from each of two flight-crew member stations in the pilot compartment.", "Accessible only via a shared headset in the center console."},
        "Accessible for immediate use from each of two flight-crew member stations in the pilot compartment.",
        "CS 25.1423 states the PA system must be accessible for immediate use from each of two flight-crew member stations in the pilot compartment.",
        "Both operating pilots must be able to make immediate emergency announcements."
    },
    {
        "If a partial failure occurs in the passenger address system, what action is instructed by the MMEL?",
        {"Cancel all subsequent flights immediately.", "Refer to the item(s) of the affected system(s).", "Perform an immediate CIDS software reset in flight."},
        "Refer to the item(s) of the affected system(s).",
        "Note 1 in MMEL 23-31-01 instructs maintenance and crew to refer to the specific item(s) of the affected system(s).",
        "Look at cross-referencing sub-components in the MEL/MMEL."
    },
    {
        "What is the primary function of megaphones as referenced under CS 25.1421?",
        {"Passenger entertainment broadcasting.", "Emergency acoustic communication during evacuation or power loss.", "Inter-cockpit communication during high engine noise."},
        "Emergency acoustic communication during evacuation or power loss.",
        "Megaphones serve as independent emergency electronic equipment for crew to direct passengers during emergency evacuation.",
        "Think of handheld, battery-powered emergency acoustic equipment."
    }
};

}