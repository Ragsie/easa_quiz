#include <vector>
#include "question.h"

std::vector<Question> getATA38Questions() {
    return {
        //ata 38
        {
            "What material is primarily used for the construction of potable water tanks?",
            {"Stainless steel alloy with polyurethane inner coating.", "Glass fibre reinforced plastic.", "Titanium alloy coated with anti-corrosion lacquer."},
            "Glass fibre reinforced plastic.",
            "Potable water tanks are made of glass fibre reinforced plastic and are located in the pressurized underfloor area of the fuselage.",
            "Think of lightweight composite materials commonly used in non-structural cabin/water storage systems."
        },
        {
            "Where are the potable water storage tanks installed in the aircraft fuselage?",
            {"In the unpressurized tail cone area behind the aft pressure bulkhead.", "In the pressurized underfloor area of the fuselage.", "Inside the dry bays of the wing center section."},
            "In the pressurized underfloor area of the fuselage.",
            "The potable water tanks are located in the pressurized underfloor area of the fuselage to protect them from extreme ambient temperatures and pressure differentials.",
            "Consider which area of the fuselage is temperature- and pressure-conditioned."
        },
        {
            "What are the three main traditional subsystems within ATA 38 Water and Waste, plus the modern addition?",
            {"Potable water, fuel scavenge, toilet waste, and bilge water.", "Potable water, waste water, toilet waste, and gray water.", "Drinking water, hydraulic return, lavatory rinse, and engine wash."},
            "Potable water, waste water, toilet waste, and gray water.",
            "The subsystems are: the potable water system, the waste water system, the toilet waste system, and in newest planes a gray water system.",
            "Think of the clear supply, sink/galley drainage, toilet collection, and modernized gray water."
        },
        {
            "What is the function of the header located inside the lavatory cabinet?",
            {"It heats cold water directly before entering the washbasin faucet.", "It acts as a distribution point supplying water to the toilet, water heater, mixer valve, and washbasin.", "It separates grey water from black water before draining into the bilge."},
            "It acts as a distribution point supplying water to the toilet, water heater, mixer valve, and washbasin.",
            "Water flows from the tanks through the manual shut-off valve to the header, which acts as a distribution point supplying water to the toilet, water heater, mixer valve, and washbasin.",
            "Think of a manifold that divides one incoming line into several branch lines."
        },
        {
            "What is the temperature adjustment range available on a standard lavatory mixer valve?",
            {"15 deg C to 30 deg C (59 deg F to 86 deg F).", "26 deg C to 43 deg C (80 deg F to 110 deg F).", "45 deg C to 60 deg C (113 deg F to 140 deg F)."},
            "26 deg C to 43 deg C (80 deg F to 110 deg F).",
            "With the temperature adjustment knob on the mixer valve you can select warm water from 26 deg C to 43 deg C (80 deg F to 110 deg F).",
            "It provides comfortable hand-washing temperature without scalding."
        },
        {
            "How is the water flow stopped on a single-inlet push-button mechanical faucet?",
            {"By an electrical solenoid energized by a capacitive proximity sensor.", "Automatically by the internal cartridge a few seconds after releasing the actuator button.", "By a microswitch activating the main potable water shut-off valve."},
            "Automatically by the internal cartridge a few seconds after releasing the actuator button.",
            "When you release the actuator button, the water flow stops after a few seconds automatically via the cartridge.",
            "The timing mechanism is self-contained mechanically inside the cartridge."
        },
        {
            "How does an infrared lavatory faucet detect the presence of a user's hands?",
            {"One lens sends out an infrared light beam which is reflected back by hands to a second receiver lens.", "A single thermal camera measures localized temperature rises in the sink basin.", "An ultrasonic sonar transceiver calculates distance through high-frequency acoustic waves."},
            "One lens sends out an infrared light beam which is reflected back by hands to a second receiver lens.",
            "One of the lenses sends out an infrared light beam; when hands are placed near, the beam is reflected back to the second lens (receiver), which signals the amplifier to open the solenoid valve.",
            "Two optical lenses work together as emitter and receiver."
        },
        {
            "What is the adjustable time range for the shut-off timer inside the infrared faucet sensor unit?",
            {"Between 0.5 to 2 seconds.", "Between 3 to 15 seconds.", "Between 20 to 45 seconds."},
            "Between 3 to 15 seconds.",
            "The water flow stops when you remove your hands from the infrared beam. You can adjust the timer inside the sensor unit to between 3 to 15 seconds.",
            "A short delay avoids immediate shut-off while moving hands under the stream."
        },
        {
            "What electrical power supply does the B747 electrical washbasin faucet receive?",
            {"115 V AC 400 Hz three-phase.", "28 V DC from the control module.", "12 V DC from a dedicated lavatory battery."},
            "28 V DC from the control module.",
            "The lavatory washbasin faucet is electrical and gets 28 Volts Direct Current (VDC) from the control module.",
            "Standard aircraft low-voltage DC bus supply."
        },
        {
            "On the B747 electrical faucet, what does the continuous center green LED signify?",
            {"The faucet is in rapid drain mode.", "The faucet has power and the temperature setting is in the middle between hot and cold.", "The water heater has overheated and tripped its thermal switch."},
            "The faucet has power and the temperature setting is in the middle between hot and cold.",
            "The middle light is green and will always stay on to tell you that the faucet has power and the water temperature is in the middle between hot and cold.",
            "Green indicates normal ready status at balanced mid-range temperature."
        },
        {
            "How do you select full hot water on the B747 electrical washbasin faucet from the center position?",
            {"Push the red control switch once.", "Push the red control switch two times (showing one green and two red LEDs).", "Hold down the red switch continuously for 5 seconds."},
            "Push the red control switch two times (showing one green and two red LEDs).",
            "From the middle position, push the red button two times to get to full hot; one green and two red lights will show.",
            "Two incremental button presses are needed to step to full hot."
        },
        {
            "How do you select full cold water on the B747 electrical washbasin faucet from the center position?",
            {"Push the blue control switch once.", "Push the blue control button two times (showing one green and two blue LEDs).", "Hold down the blue switch continuously for 5 seconds."},
            "Push the blue control button two times (showing one green and two blue LEDs).",
            "With only the green light on, push the blue button two times to get to the full cold position. One green and two blue lights will show.",
            "Two presses on the blue button reach full cold."
        },
        {
            "How quickly does water flow stop on the B747 electrical faucet when hands are removed?",
            {"After a fixed 10-second delay.", "Immediately when you remove your hand from the infrared sensing window.", "Only after pressing the blue cold switch once."},
            "Immediately when you remove your hand from the infrared sensing window.",
            "After setting the temperature, placing a hand in front of the sensor causes water to flow, and water goes off immediately when the hand is removed.",
            "Direct immediate shut-off on this specific electrical model."
        },
        {
            "What is the capacity and element heating power of the typical lavatory water heater described?",
            {"Approximately 1 pint (0.5 L) and 150 W.", "Approximately 3 pints (1.5 litres) and 420 W.", "Approximately 8 pints (4.0 L) and 1200 W."},
            "Approximately 3 pints (1.5 litres) and 420 W.",
            "The water heater tank can hold approximately 3 pints or 1.5 litres of water and contains 420 W heating elements.",
            "Roughly one and a half litres with 420 Watts of electrical power."
        },
        {
            "At what water temperature does the normal cycling thermostat regulate the lavatory water heater?",
            {"38 deg C (100 deg F).", "52 deg C (125 deg F).", "85 deg C (185 deg F)."},
            "52 deg C (125 deg F).",
            "The control thermostat switch controls the temperature at 52 deg C (125 deg F) by a cycling switch operation.",
            "Standard comfortable hot water target around fifty-two degrees Celsius."
        },
        {
            "At what temperature does the water heater overheat switch open, and how is it recovered?",
            {"Opens at 70 deg C and resets automatically upon cooling.", "Opens at approximately 90 deg C and must be manually reset at the top of the heater.", "Opens at 120 deg C and requires replacing an internal thermal cartridge."},
            "Opens at approximately 90 deg C and must be manually reset at the top of the heater.",
            "The overheat switch opens when water temperature increases to about 90 deg C. If an overheat occurs, you must manually reset the switch at the top of the heater.",
            "A 90 deg C safety cutout requiring manual reset at the top."
        },
        {
            "What are the three selectable temperatures on aircraft equipped with a 3-position water heater temperature switch?",
            {"Low 20 deg C, Med 35 deg C, High 50 deg C.", "Low ~38 deg C (100 deg F), Medium ~44 deg C (111 deg F), High ~52 deg C (125 deg F).", "Low 40 deg C, Medium 60 deg C, High 80 deg C."},
            "Low ~38 deg C (100 deg F), Medium ~44 deg C (111 deg F), High ~52 deg C (125 deg F).",
            "When set to Low: ~38 deg C (100 deg F); Medium: ~44 deg C (111 deg F); High: ~52 deg C (125 deg F).",
            "Low is 38 deg C, Medium is 44 deg C, and High is 52 deg C."
        },
        {
            "At what pressures does the water heater pressure relief valve open and reclose?",
            {"Opens above 40 psi, closes below 30 psi.", "Opens above 60 psi, closes below 54 psi.", "Opens above 140 psi, closes below 130 psi."},
            "Opens above 140 psi, closes below 130 psi.",
            "The pressure relief valve opens automatically when pressure in the heater increases to more than 140 psi, and closes when pressure decreases below 130 psi.",
            "High threshold of 140 psi to handle thermal expansion in an isolated closed vessel."
        },
        {
            "What is the primary source of potable water tank pressurization during normal flight operation?",
            {"Bleed air from the pneumatic system.", "An electric motor-driven water impeller pump.", "Cabin outflow valve exhaust pressure."},
            "Bleed air from the pneumatic system.",
            "For water pressurization, normally bleed air from the pneumatic system is used. When this source is unavailable, an electrical air compressor is activated.",
            "Pneumatic bleed air from engines or APU."
        },
        {
            "At what pneumatic manifold pressure does the pressure switch close to start the backup air compressor?",
            {"When pressure drops below 15 psi.", "When pressure decreases below 30 psi.", "When pressure drops below 50 psi."},
            "When pressure decreases below 30 psi.",
            "The pressure switch closes when pressure from the pneumatic manifold decreases below 30 psi, starting the electric compressor.",
            "Thirty psi is the lower threshold to start the boost compressor."
        },
        {
            "At what pressure does the pressure switch open to stop the electrical air compressor?",
            {"When pressure increases to more than 40 psi.", "When pressure reaches 60 psi.", "When pressure reaches 100 psi."},
            "When pressure increases to more than 40 psi.",
            "The pressure switch opens again when the pressure increases to more than 40 psi, which stops the compressor.",
            "Compressor cut-out is forty psi."
        },
        {
            "What is the operating set point of the water supply line pressure relief valve?",
            {"Opens at 40 psi and closes at 30 psi.", "Opens at 60 psi and closes below 54 psi.", "Opens at 140 psi and closes at 130 psi."},
            "Opens at 60 psi and closes below 54 psi.",
            "The pressure relief valve opens when pressure increases to 60 psi (e.g. if the pressure switch fails to open at 40 psi) and closes below 54 psi.",
            "Vents at 60 psi to protect lines and reseats at 54 psi."
        },
        {
            "Why are check valves installed in the air supply boost lines to the potable water tank?",
            {"To regulate airflow precisely to 5 psi.", "To prevent reverse flow of water and air into the air supply when manifold pressure drops.", "To inject bactericide vapor into the tank head space."},
            "To prevent reverse flow of water and air into the air supply when manifold pressure drops.",
            "The check valves prevent a reverse flow of water and air to the air supply when its pressure is lower than the water tank pressure.",
            "Check valves ensure one-way flow into the water tank."
        },
        {
            "What vital safety rule must be followed before replacing any component in the potable water system?",
            {"Ensure the toilet flush counter is set to zero.", "Be sure that the pneumatic system is depressurized.", "Drain the engine oil reservoirs completely."},
            "Be sure that the pneumatic system is depressurized.",
            "If you must replace a component in the potable water system, be sure that the pneumatic system is depressurized.",
            "Always relieve pneumatic line pressure before opening lines."
        },
        {
            "Where are air filters located in the potable water pressurization system and why?",
            {"Inside the washbasin faucets to filter mineral deposits.", "In both the bleed air and compressor supply lines to prevent dirt from entering the potable water.", "In the toilet vacuum blower discharge duct to filter cabin air."},
            "In both the bleed air and compressor supply lines to prevent dirt from entering the potable water.",
            "There is an air filter in both supply lines. They prevent that dirt from the air supply can enter the potable water system.",
            "Air filters keep particulate contaminants out of the clean water tanks."
        },
        {
            "What is the purpose of the water service panel interlock proximity switch (magnetic reed switch)?",
            {"It automatically drains the water tanks when opened.", "It prevents electrical air compressor operation while the access door is open during servicing.", "It turns on the galley water heaters to defrost lines during servicing."},
            "It prevents electrical air compressor operation while the access door is open during servicing.",
            "When you open the access door, the interlock switch is operated. This prevents air compressor operation during servicing.",
            "Safety interlock disables pressurization compressor while technicians work on the panel."
        },
        {
            "How is the potable water fill and overflow valve mechanically actuated from the service panel?",
            {"By pulling the manual T-handle, which moves a teleflex cable.", "By an electric stepper motor commanded via the refuel station.", "By a pneumatic pilot valve tied to the cargo door locking mechanism."},
            "By pulling the manual T-handle, which moves a teleflex cable.",
            "To begin the water supply, pulling the T-handle opens the fill and overflow valve via a teleflex cable.",
            "A flexible mechanical cable connects the manual T-handle to the valve."
        },
        {
            "What happens when the potable water tank reaches the preselected fill level during servicing?",
            {"An audible horn sounds on the flight deck.", "The quantity control unit signals an actuator to close the valve, retracting the T-handle and illuminating the FULL light.", "The APU automatically shuts down to dump bleed pressure."},
            "The quantity control unit signals an actuator to close the valve, retracting the T-handle and illuminating the FULL light.",
            "The quantity control unit closes the fill and overflow valve via an actuator, retracts the T-handle automatically, and turns on the FULL light.",
            "Automatic shut-off closes the valve, pulls back the handle, and lights FULL."
        },
        {
            "What happens if the fill and overflow valve fails to close after the potable water tank is full?",
            {"The water tanks rupture into the cargo compartment.", "Excess water flows out of the aircraft via the overflow drain port on the service panel.", "The high-pressure relief valve trips and isolates the bleed air system."},
            "Excess water flows out of the aircraft via the overflow drain port on the service panel.",
            "When the valve does not close, excess water flows safely out of the aircraft via the drain port on the service panel.",
            "An overflow passage dumps excess water out onto the ramp through the panel drain."
        },
        {
            "What operating principle is used by the continuous water quantity transmitter?",
            {"A float connected to an inductive synchro.", "A capacitance probe mounted inside or parallel to the tanks like a standpipe.", "A radar pulse transmitter installed on the tank access port."},
            "A capacitance probe mounted inside or parallel to the tanks like a standpipe.",
            "The water quantity transmitter measures water volume using a capacitance probe, installed inside a tank or parallel to the tanks like a standpipe.",
            "Capacitance probe similar to aircraft fuel quantity probes."
        },
        {
            "Why is the external standpipe water quantity transmitter vented to the potable water tanks at the top and bottom?",
            {"To inject heating air directly into the sensor probe.", "To obtain exactly the same water level and pressure as inside the storage tanks.", "To allow overflow water to drain directly into the cargo bilge."},
            "To obtain exactly the same water level and pressure as inside the storage tanks.",
            "The transmitter is vented to the tanks by a pneumatic line at the top and a water line at the bottom in order to get the same water level as the tanks.",
            "Equalizing pneumatic and hydraulic heads ensures identical liquid height."
        },
        {
            "How many fill selections are available on the cabin water quantity preselector example described in the manual?",
            {"3 selections (EMPTY, HALF, FULL).", "8 selections between EMPTY and FULL.", "16 discrete stepped selections."},
            "8 selections between EMPTY and FULL.",
            "With the water quantity preselector you can select the amount of water to be pumped into the tanks; 8 selections between EMPTY and FULL are available.",
            "Eight selectable fill steps on the control dial."
        },
        {
            "Why must the potable water system be completely drained if parked outside in freezing weather?",
            {"To prevent bacterial colonization in stagnant lines.", "To prevent residual water from freezing and causing burst pipes and severe structural/system damage.", "To reduce aircraft ramp weight for towing operations."},
            "To prevent residual water from freezing and causing burst pipes and severe structural/system damage.",
            "The water system must be completely drained if the aircraft is parked outside the hangar in freezing conditions to prevent ice expansion damage.",
            "Freezing water expands and ruptures metal/composite lines."
        },
        {
            "How is water forced out during a rapid potable water draining procedure on the ground?",
            {"By running the lavatory flush motors continuously.", "By pressurizing the potable water system with APU bleed air.", "By connecting a ground vacuum suction hose to the washbasins."},
            "By pressurizing the potable water system with APU bleed air.",
            "Normally it is necessary to force water out of the drain ports by pressurizing the potable water system with APU bleed air, after which gravity completes draining.",
            "Bleed air pressure accelerates water expulsion before final gravity drainage."
        },
        {
            "Why are washbasins and faucets designed to be self-vented during draining?",
            {"To allow air to enter the water system so that complete gravity draining can occur without hydraulic lock.", "To prevent cabin odours from backing up into the galley sinks.", "To vent hot air from the mixer valve into the cabin ceiling."},
            "To allow air to enter the water system so that complete gravity draining can occur without hydraulic lock.",
            "The washbasins and faucets are self-vented so that air can enter the water system to achieve complete draining.",
            "Air ingress at high points allows water to flow out freely at low drain valves."
        },
        {
            "What post-draining step is required before securing the potable water system?",
            {"Run all water heaters on maximum for 15 minutes.", "Pressurize the system to ensure all water is purged, then close all drain and shut-off valves.", "Fill the tanks with five gallons of pure isopropyl alcohol."},
            "Pressurize the system to ensure all water is purged, then close all drain and shut-off valves.",
            "After the draining procedure, you must pressurize the system to make sure that all the water has drained out, then close all drain and shut-off valves.",
            "Air-purge confirmation followed by closing all valves."
        },
        {
            "How is grey waste water from galleys and washbasins expelled from the aircraft in flight?",
            {"It is pumped into the vacuum toilet holding tanks.", "By gravity and differential pressure between cabin and ambient air through heated drain masts.", "By evaporating inside the engine exhaust ducts."},
            "By gravity and differential pressure between cabin and ambient air through heated drain masts.",
            "Waste water is directed out through drain lines and drain masts generated by gravity and differential pressure between the pressurized cabin and ambient air.",
            "Cabin-to-ambient pressure differential drives liquid out through external drain masts."
        },
        {
            "Why are drain masts and waste water lines electrically heated?",
            {"To sanitize grey water before discharging into the atmosphere.", "To prevent water from freezing and plugging the drain lines in cold high-altitude conditions.", "To heat the lower fuselage skin and prevent aerodynamic boundary layer separation."},
            "To prevent water from freezing and plugging the drain lines in cold high-altitude conditions.",
            "The drain masts and parts of the waste lines are electrically heated to prevent water from freezing in these lines at sub-zero cruise temperatures.",
            "Drain mast anti-icing prevents frozen water blocks."
        },
        {
            "What safety warning is highlighted regarding heated drain masts on the ground?",
            {"They can generate high electrostatic voltages.", "Never touch any heated parts when power is on or just switched off; the drain mast is hot enough to cause severe burns.", "They emit dangerous ultraviolet radiation during self-test."},
            "Never touch any heated parts when power is on or just switched off; the drain mast is hot enough to cause severe burns.",
            "Never touch any heated parts when the heater is on or has just been switched off. Especially the drain mast, which is hot enough to burn you.",
            "Severe burn hazard due to high-power heating elements."
        },
        {
            "What kind of electric motor is used in a recirculating flush motor toilet assembly?",
            {"A low-voltage 12 V DC stepper motor.", "A high power 3-phase AC electric motor.", "A 28 V DC permanent magnet motor."},
            "A high power 3-phase AC electric motor.",
            "The flush motor is a high power 3-phase electric motor.",
            "Standard aircraft 3-phase AC motor for heavy-duty pumping."
        },
        {
            "How long does the flush cycle timer keep the flush motor running in a flush motor toilet?",
            {"3 seconds.", "10 seconds.", "30 seconds."},
            "10 seconds.",
            "When you operate the flush handle, a switch starts a 10-second timer circuit that keeps the relay energized and runs the motor for 10 seconds.",
            "Exactly 10 seconds per flush cycle."
        },
        {
            "In a flush motor toilet, what device prevents the rotating filter basket holes from clogging?",
            {"A high-pressure pneumatic backflush jet.", "A fixed wiper blade on the outer surface of the rotating filter basket.", "An acoustic ultrasonic cleaning transducer on the basket hub."},
            "A fixed wiper blade on the outer surface of the rotating filter basket.",
            "A fixed wiper blade on the outer surface of the filter basket cleans the basket's surface as it rotates, preventing clogging of the filter holes.",
            "A stationary wiper blade scrapes against the spinning basket."
        },
        {
            "What volume of liquid recirculates to flush the bowl during each flush cycle of a flush motor toilet?",
            {"Approximately 0.5 gallons.", "Approximately 2 gallons.", "Approximately 6 gallons."},
            "Approximately 2 gallons.",
            "Approximately 2 gallons of liquid flushes the toilet bowl and returns to the tank.",
            "Two gallons of recirculated fluid per flush."
        },
        {
            "What is the composition and usage life of the fluid charge in a flush motor toilet tank?",
            {"Pure distilled water; good for 20 flushes.", "A mixture of water and chemical (disinfectant, dye, and deodorant); good for approximately 100 flushes.", "Hydraulic fluid blend; good for 500 flushes."},
            "A mixture of water and chemical (disinfectant, dye, and deodorant); good for approximately 100 flushes.",
            "The liquid is a mixture of water and a chemical containing disinfectant, dye, and deodorant, allowing approximately 100 flushes before servicing is required.",
            "Blue chemical fluid formulated for around 100 flushes."
        },
        {
            "Why does a vacuum toilet system allow greater flexibility in passenger cabin layout compared to flush motor toilets?",
            {"Because it eliminates the need for potable water lines entirely.", "Because central waste tanks in cargo compartments allow toilet cabin locations to be rearranged easily without individual under-toilet holding tanks.", "Because vacuum piping can be routed externally outside the fuselage."},
            "Because central waste tanks in cargo compartments allow toilet cabin locations to be rearranged easily without individual under-toilet holding tanks.",
            "Vacuum toilet systems have central waste tanks in the cargo area, which allows more flexibility in cabin layout because toilet locations can easily be modified.",
            "Central waste tanks decouple seat and lavatory positioning."
        },
        {
            "In a vacuum toilet system, what is the precise operating sequence controlled by the Flush Control Unit (FCU)?",
            {"Flush valve opens 10s, then rinse valve opens 5s.", "Rinse water valve opens for ~1 second, then the motor-operated flush valve opens for ~4 seconds.", "Rinse valve and flush valve open simultaneously for exactly 8 seconds."},
            "Rinse water valve opens for ~1 second, then the motor-operated flush valve opens for ~4 seconds.",
            "The FCU opens the solenoid-operated rinse water valve for about 1 second (wetting the bowl), then opens the motor-operated flush valve for about 4 seconds.",
            "Brief bowl rinse first (1s), followed by suction evacuation (4s)."
        },
        {
            "What is the function of the manual waste shut-off valve installed on some vacuum toilet aircraft?",
            {"To regulate flush water flow during ground cleaning.", "To isolate the toilet if the motorized flush valve fails in the open position.", "To divert toilet waste directly to the overboard drain mast."},
            "To isolate the toilet if the motorized flush valve fails in the open position.",
            "Some aircraft have a manual waste shut-off valve that you can close if the flush valve fails in the open position to maintain cabin pressurization.",
            "Manual backup isolation against a stuck-open flush valve."
        },
        {
            "What is the function of the anti-siphon valve in the vacuum toilet rinse water line?",
            {"To boost rinse water pressure to 100 psi.", "It is a check valve that prevents backflow of water from the toilet bowl into the potable water supply.", "To drain the toilet bowl into the bilge if the flush valve fails."},
            "It is a check valve that prevents backflow of water from the toilet bowl into the potable water supply.",
            "The anti-siphon valve is a check valve that prevents backflow of water from the toilet into the potable water system, opening only when water pressure exceeds cabin air pressure.",
            "Anti-contamination check valve protecting the clean drinking water line."
        },
        {
            "At what altitude does the vacuum toilet system switch between the vacuum blower and ambient differential pressure?",
            {"10,000 feet.", "16,000 feet.", "28,000 feet."},
            "16,000 feet.",
            "Above 16,000 feet, low ambient air pressure provides enough differential pressure. Below 16,000 feet, an altitude pressure switch activates the vacuum blower.",
            "Sixteen thousand feet is the transition boundary."
        },
        {
            "What is the function of the liquid / water separator in the vacuum toilet waste system?",
            {"It extracts clean drinking water from waste air.", "It removes moisture and waste particles from the waste tank air before it is vented overboard by the vacuum blower.", "It separates chemical deodorant from galley sink water."},
            "It removes moisture and waste particles from the waste tank air before it is vented overboard by the vacuum blower.",
            "The liquid separator removes moisture and waste particles from the waste tank air before it is vented overboard by the vacuum blower.",
            "Protects the vacuum blower and ambient exhaust from moisture and particulates."
        },
        {
            "What happens when a vacuum waste tank level sensor detects a full tank?",
            {"It opens the tank drain valve to dump excess liquid into the cargo bay.", "It inhibits the flush circuits of connected toilets and activates the LAV INOP light on the attendants panel.", "It turns off the engine bleed air valves automatically."},
            "It inhibits the flush circuits of connected toilets and activates the LAV INOP light on the attendants panel.",
            "When the tank is full, the sensor inhibits the flush circuits of the connected toilets and activates the corresponding LAV INOP light on the attendants panel.",
            "Inhibits toilet flushing and warns cabin crew that the lavatory is inoperative."
        },
        {
            "What is the purpose of the safety valve located behind the drain cap on the vacuum waste service panel?",
            {"To regulate ground flushing water pressure to 20 psi.", "To prevent waste leakage or accidental discharge if the main tank drain valve is faulty or unseated.", "To prevent vacuum blower air from entering the service truck."},
            "To prevent waste leakage or accidental discharge if the main tank drain valve is faulty or unseated.",
            "When you open the drain cap, the safety valve prevents waste leakage from a faulty drain valve until the service hose is connected and the lever rotated 1/4 turn.",
            "Secondary safety barrier preventing hazardous leaks during cap removal."
        },
        {
            "How is the safety valve on the waste drain fitting manually opened before draining?",
            {"By rotating the open release lever 1/4 turn after connecting the service hose.", "By pulling the forward T-handle on the potable water panel.", "By commanding the cabin attendant panel to DRAIN mode."},
            "By rotating the open release lever 1/4 turn after connecting the service hose.",
            "Before you can drain waste, you must connect the service cart hose and open the safety valve by rotating the open release lever a 1/4 turn.",
            "A quarter-turn release lever unlocks the inner safety flap."
        },
        {
            "What safety interlock occurs when the vacuum waste tank drain valve handle is pulled on the service panel?",
            {"The galley ovens are switched off.", "The attached proximity switch opens to cut off vacuum blower power, preventing blower operation during servicing.", "The APU bleed air valve is forced open to pressurize the waste tank."},
            "The attached proximity switch opens to cut off vacuum blower power, preventing blower operation during servicing.",
            "When the drain valve is opened, the attached proximity switch opens, cutting off vacuum blower power to prevent it from operating during servicing.",
            "Disables the vacuum blower to ensure safe servicing without unwanted suction."
        },
        {
            "How much clean water is used to flush each vacuum waste tank during ground servicing?",
            {"1 to 2 U.S. gallons.", "Between 5 to 10 U.S. gallons.", "25 to 35 U.S. gallons."},
            "Between 5 to 10 U.S. gallons.",
            "To flush the vacuum waste tank you must use between 5 to 10 U.S. gallons of water depending on the aircraft type.",
            "Five to ten gallons for a thorough vacuum tank rinse."
        },
        {
            "How is the drain valve of a flush motor toilet constructed and sealed?",
            {"It has a ceramic gate seated in an epoxy resin collar.", "It is seated in a hole at the tank bottom with a spring-loaded telescoping guide tube enclosed by a rubber boot.", "It uses an electrically driven ball valve with teflon wiper seals."},
            "It is seated in a hole at the tank bottom with a spring-loaded telescoping guide tube enclosed by a rubber boot.",
            "The valve is seated in a hole at the bottom of the toilet waste tank and has a spring-loaded telescoping guide tube enclosed by a rubber boot.",
            "Telescoping guide tube protected by an accordion rubber boot."
        },
        {
            "How much chemical solution is recharged into a flush motor toilet tank during ground servicing?",
            {"Between 0.5 to 1.5 U.S. gallons.", "Between 3 to 7 U.S. gallons.", "12 to 18 U.S. gallons."},
            "Between 3 to 7 U.S. gallons.",
            "This allows you to charge the tank with between 3 to 7 U.S. gallons of recommended chemical solution depending on aircraft type.",
            "Three to seven gallons of disinfectant chemical recharge."
        },
        {
            "What alternative method exists for charging a flush motor toilet tank with chemical?",
            {"Injecting chemical concentrate via the potable water service panel.", "Charging the tank with water and then adding concentrated chemical directly through the toilet bowl.", "Circulating chemical vapor through the cabin air distribution ducts."},
            "Charging the tank with water and then adding concentrated chemical directly through the toilet bowl.",
            "An alternative service method is to charge the tank with water and then add a concentrated chemical through the toilet bowl.",
            "Pouring concentrated chemical directly into the bowl filled with water."
        },
        {
            "Why must spilt servicing fluids be cleaned up immediately from the aircraft service area?",
            {"To prevent ground accidents on slippery surfaces and prevent corrosion of the aircraft structure.", "To prevent attracting birds and wildlife to the runway.", "To maintain correct aircraft center of gravity."},
            "To prevent ground accidents on slippery surfaces and prevent corrosion of the aircraft structure.",
            "Clean the service area of all spilt liquids immediately to prevent accidents on slippery ground and corrosion occurring to the aircraft structure.",
            "Safety on ramp and anti-corrosion protection for aluminum structure."
        },
        {
            "How does closing the waste service drain cap affect the internal safety valve?",
            {"It automatically trips the attendant panel circuit breaker.", "It closes the safety valve automatically.", "It triggers a 10-second tank rinse cycle."},
            "It closes the safety valve automatically.",
            "Closing the drain cap closes the safety valve automatically, ensuring dual-barrier sealing against accidental leakage.",
            "Cap closure automatically forces the safety valve shut."
        }
    };

}