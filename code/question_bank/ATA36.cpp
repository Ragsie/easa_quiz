#include <vector>
#include "question.h"

std::vector<Question> getATA36Questions() {
    return {
        // ata 36
        {
            "Which gas is normally used as the power source in aircraft pneumatic systems?",
            {"Pure Nitrogen", "Air", "Helium"},
            "Air",
            "Pneumatics deals with compressed or pressurized gas as a source of power, and on aircraft, the gas used is normally air.",
            "Think of the surrounding atmospheric medium."
        },
        {
            "Which of the following is a primary consumer of aircraft pneumatic energy?",
            {"Avionics cooling fan motors", "Wing anti-icing and cabin pressurization", "Electric flight control actuators"},
            "Wing anti-icing and cabin pressurization",
            "Pneumatic energy is used for engine starting, cabin pressurization, air conditioning, wing anti-icing, and water/hydraulic reservoir pressurization.",
            "Look for systems requiring large volumes of hot or pressurized air."
        },
        {
            "What are the two built-in pressurized air sources available on an aircraft in flight?",
            {"Engines and APU", "Engines and Ram Air Turbine", "APU and Ground Cart"},
            "Engines and APU",
            "The only built-in air pressure sources on the aircraft are the engine compressor stages (Engine Bleed Air) and the Auxiliary Power Unit (APU).",
            "Think about on-board power and propulsion units."
        },
        {
            "What is the worldwide standard size for high-pressure ground air connectors?",
            {"2 inches", "3 inches", "4 inches"},
            "3 inches",
            "Ground air supply is connected via 3-inch ground connectors, which is the worldwide standard size.",
            "It is a standard 3-inch connection coupling."
        },
        {
            "Why is bleed air pressure regulation required on engine bleed systems?",
            {"Because engine thrust changes generate varying air pressure, but consumers require a constant level.", "To prevent cabin air from entering the compressor stages.", "To continuously cool the turbine exhaust gas."},
            "Because engine thrust changes generate varying air pressure, but consumers require a constant level.",
            "Engine thrust varies continuously during flight, causing fluctuating bleed pressure. A regulator ensures consumers receive steady pressure.",
            "Consumers need a stable, predetermined supply pressure."
        },
        {
            "From which two compressor sections is engine bleed air typically extracted?",
            {"Fan and LP turbine", "Intermediate Pressure (IP) and High Pressure (HP) stages", "Combustion chamber and exhaust nozzle"},
            "Intermediate Pressure (IP) and High Pressure (HP) stages",
            "Bleed air is bled from two compressor stages: the intermediate pressure (IP) stage and the high pressure (HP) stage.",
            "Think of the two main compressor pressure stages."
        },
        {
            "When is engine bleed air taken from the High Pressure (HP) stage?",
            {"During takeoff and climb when thrust is at maximum", "When the engine is at low speed/idle and IP pressure is insufficient", "Only when wing anti-ice is turned off"},
            "When the engine is at low speed/idle and IP pressure is insufficient",
            "At low engine speeds, the IP stage cannot provide sufficient pressure, requiring the HP valve to open and supply HP air.",
            "Consider low engine rotational speed operations."
        },
        {
            "What type of valve is the High Pressure (HP) bleed valve typically?",
            {"An electrically driven ball valve", "A pneumatically operated butterfly valve spring-loaded to close", "A hydraulically actuated gate valve"},
            "A pneumatically operated butterfly valve spring-loaded to close",
            "The HP valve is a pneumatically operated butterfly-type valve that is spring loaded to the closed position.",
            "It uses air pressure to open against an internal spring."
        },
        {
            "What component protects the Intermediate Pressure (IP) compressor stage against reverse flow when the HP valve opens?",
            {"The IP check valve", "The crossbleed valve", "The fan air modulating valve"},
            "The IP check valve",
            "The IP check valve protects the lower pressure stage against backflow when high-pressure air is being supplied.",
            "Look for a one-way non-return valve on the IP line."
        },
        {
            "What is the purpose of the manual override feature found on pneumatic valves?",
            {"To adjust the cracking pressure in flight", "To lock the valve in a closed or open position during maintenance or malfunction", "To drain accumulated water from the ducting"},
            "To lock the valve in a closed or open position during maintenance or malfunction",
            "The manual override locks the valve mechanically (e.g., closed) in case of system malfunction or for maintenance safety.",
            "Think of ground servicing and dispatch safety."
        },
        {
            "What is the typical regulated pneumatic duct pressure downstream of the bleed valve?",
            {"Around 15 psi", "Around 45 psi", "Around 120 psi"},
            "Around 45 psi",
            "In most pneumatic systems, the bleed valve regulates the system downstream pressure to around 45 psi.",
            "A standard nominal value between 40 and 50 psi."
        },
        {
            "In some Boeing aircraft systems, how is pressure regulated using two valves?",
            {"The first regulates to 20 psi above final pressure, and the bleed valve regulates to final pressure (~45 psi).", "Both valves regulate simultaneously to exactly 45 psi in parallel.", "One valve handles temperature while the other handles mass flow."},
            "The first regulates to 20 psi above final pressure, and the bleed valve regulates to final pressure (~45 psi).",
            "The pressure regulator valve controls pressure to about 20 psi above final value, then the bleed valve regulates it to 45 psi.",
            "A two-step step-down pressure regulation method."
        },
        {
            "Which of the following is NOT a primary function of the engine bleed valve (PRSOV)?",
            {"Pressure regulation", "Air temperature heating", "Shutoff function"},
            "Air temperature heating",
            "The bleed valve serves shutoff, pressure regulation, check valve, overtemperature protection, and reverse flow functions, but never heating.",
            "The valve controls flow and pressure, not thermal heating."
        },
        {
            "What type of closure element is commonly used in pneumatic bleed valves?",
            {"Poppet plug", "Butterfly plate", "Needle stem"},
            "Butterfly plate",
            "The closure element of standard aircraft pneumatic valves is designed as a butterfly plate acting as a variable orifice.",
            "A disc pivoting inside the circular duct bore."
        },
        {
            "How is the engine bleed valve commanded to shut off when the cockpit bleed switch is selected OFF?",
            {"An electric motor winds the plate closed", "A solenoid opens a port to ambient, venting actuator open pressure", "Hydraulic pressure forces the valve shut"},
            "A solenoid opens a port to ambient, venting actuator open pressure",
            "Activating the switch de-energizes/energizes a solenoid which vents actuator opening chamber pressure, allowing the spring to close the valve.",
            "Venting pressure allows mechanical spring force to act."
        },
        {
            "What component is used to cool hot engine bleed air in the pylon/engine nacelle?",
            {"Pneumatic condenser", "Air-to-air heat exchanger (precooler)", "Refrigerant evaporator core"},
            "Air-to-air heat exchanger (precooler)",
            "A built-in precooler, which is an air-to-air heat exchanger, cools engine bleed air using cold ambient fan discharge air.",
            "A heat exchanger placed before the main distribution duct."
        },
        {
            "Where is the cooling air for the precooler extracted from?",
            {"The aircraft cabin exhaust", "The engine fan duct (fan air)", "The air conditioning pack output"},
            "The engine fan duct (fan air)",
            "Cooling air for the precooler is taken directly from the engine fan bypass duct as fan air.",
            "Think of the large bypass stream around the core."
        },
        {
            "How is the cooling effect of the precooler modulated?",
            {"By adjusting the engine fuel flow", "By varying the mass of fan air via the Fan Air Valve (FAV)", "By bypassing bleed air around the precooler"},
            "By varying the mass of fan air via the Fan Air Valve (FAV)",
            "The Fan Air Valve (FAV) opens or closes to regulate the mass flow of cold fan air passing through the precooler matrix.",
            "More or less cooling airflow controls final bleed temperature."
        },
        {
            "What happens if an overtemperature condition occurs downstream of the precooler?",
            {"The pneumatic controller closes the related engine bleed valve and illuminates a fault light.", "The crossbleed valve immediately opens fully.", "The APU automatically starts up."},
            "The pneumatic controller closes the related engine bleed valve and illuminates a fault light.",
            "An overtemperature sensor signals the pneumatic controller, which commands the engine bleed valve closed and triggers a cockpit fault indication.",
            "Safety isolation protects ducting from excessive heat."
        },
        {
            "What is the function of the crossbleed (isolation) valve?",
            {"To connect or isolate the left and right bleed air distribution ducts", "To dump excess pneumatic pressure overboard", "To mix hydraulic return fluid with water systems"},
            "To connect or isolate the left and right bleed air distribution ducts",
            "The crossbleed valve connects or isolates the left and right wing pneumatic ducts across the crossover duct / crossbleed manifold.",
            "It spans across the aircraft centerline manifold."
        },
        {
            "Why is the crossbleed valve typically motor-operated rather than strictly pneumatic?",
            {"Because it must open and close independently of pneumatic duct pressure.", "To prevent electromagnetic interference with weather radar.", "Because it generates vacuum for engine instruments."},
            "Because it must open and close independently of pneumatic duct pressure.",
            "Motor actuation ensures the crossbleed valve can be commanded open/closed regardless of whether air pressure is present in the duct.",
            "Think about needing to open it before air pressure arrives."
        },
        {
            "What term is commonly used on Boeing aircraft instead of 'crossbleed valve'?",
            {"Divider gate", "Isolation valve", "Separation damper"},
            "Isolation valve",
            "Boeing typically designates crossbleed valves as Isolation (ISLN) Valves on cockpit panels and system schematics.",
            "Check Boeing cockpit overhead panel terminology."
        },
        {
            "How are pneumatic duct leaks detected along the distribution system?",
            {"Using acoustic microphone loops", "Using overheat detection sensor loops along the ducts", "Using differential pressure sensors on duct clamps"},
            "Using overheat detection sensor loops along the ducts",
            "Escaping hot bleed air creates localized overheating, which is detected by continuous overheat detection loops routed along the ducts.",
            "Hot escaping compressed air increases surrounding ambient temperature."
        },
        {
            "Which areas are monitored by the pneumatic leak detection loops?",
            {"Pylon ducts, wing ducts, fuselage crossover ducts, and APU duct", "Only the main cabin ceiling and cockpit floor", "Only inside the engine combustion chamber"},
            "Pylon ducts, wing ducts, fuselage crossover ducts, and APU duct",
            "Leak detection loops monitor all primary bleed air duct routes: pylons, wings, fuselage, and APU feed lines.",
            "All zones through which high-pressure hot bleed lines pass."
        },
        {
            "What is the role of the electronic pneumatic controller?",
            {"To mechanically move the butterfly plate using gears", "To monitor pressure/temperature, register leaks, and control pneumatic components", "To filter moisture out of the water tanks"},
            "To monitor pressure/temperature, register leaks, and control pneumatic components",
            "The pneumatic controller is a dedicated computer that processes sensor data (pressure, temp, leaks) and controls system valves.",
            "It acts as the digital brain of the ATA 36 system."
        },
        {
            "Which inputs are monitored by the pneumatic controller?",
            {"Pneumatic pressure, temperature, fire switch, engine start status, and leak loops", "Fuel quantity, tire pressure, and elevator position", "Cabin baggage weight and GPS coordinates"},
            "Pneumatic pressure, temperature, fire switch, engine start status, and leak loops",
            "The controller receives duct pressure, air temp, engine fire switch positions, start signals, leak loop alerts, and cockpit switch commands.",
            "All relevant ATA 36 operating conditions and safety triggers."
        },
        {
            "On which cockpit display page are pneumatic system parameters typically viewed on Airbus aircraft?",
            {"HYD page", "BLEED page (or ECS page)", "ELEC DC page"},
            "BLEED page (or ECS page)",
            "On ECAM displays, pneumatic data (valve states, pressures, temperatures) is shown on the BLEED page (sometimes referred to as ECS).",
            "Look for the ATA 36/21 dedicated ECAM format."
        },
        {
            "Why are potable water tanks pressurized in commercial aircraft?",
            {"To prevent water from freezing at cruise altitude", "To force water from tanks in the cargo area up to cabin taps and galleys", "To supply emergency cooling to the wheel brakes"},
            "To force water from tanks in the cargo area up to cabin taps and galleys",
            "Compressed air pressurizes water tanks located below the cabin to push potable water upward to lavatories and galley taps.",
            "Water cannot flow upward without pressure assistance."
        },
        {
            "On a Boeing 747, at what pressure does the auxiliary water tank air compressor start if pneumatic supply is unavailable?",
            {"Below 15 PSI", "Below 32 PSI", "Below 75 PSI"},
            "Below 32 PSI",
            "If pneumatic system bleed air is not available and water tank pressure drops below 32 PSI, the electric air compressor cuts in.",
            "A threshold in the low-30s PSI range."
        },
        {
            "At what pre-pressure does the Boeing 747 potable water tank compressor stop?",
            {"39 PSI", "55 PSI", "80 PSI"},
            "39 PSI",
            "When the water tank reaches a pre-pressure of 39 PSI, the pressure switch shuts off the compressor.",
            "A cut-out threshold just below 40 PSI."
        },
        {
            "What safety interlock stops the potable water air compressor on the B747 during ground servicing?",
            {"Opening the Water Service Panel", "Selecting the APU master switch to OFF", "Extending the landing flaps"},
            "Opening the Water Service Panel",
            "The compressor interlock switch automatically stops the compressor whenever the external Water Service Panel door is opened.",
            "Ground servicing access opens an interlock safety switch."
        },
        {
            "Why were gyroscopic instruments in older/smaller aircraft driven by vacuum?",
            {"To eliminate the need for electrical batteries entirely", "To achieve high rotational speed and stability without disturbance from reaction forces", "To heat the cockpit dashboard directly"},
            "To achieve high rotational speed and stability without disturbance from reaction forces",
            "Vacuum suction spins gyro rotors up to high RPMs cleanly to provide stable flight instrument reference without magnetic interference.",
            "High rotor RPM yields gyroscopic rigidity."
        },
        {
            "Why are two independent vacuum pumps often installed on aircraft with vacuum instruments?",
            {"To alternate between left and right engine oil lubrication", "To provide redundancy because pump failure during IFR flight causes gradual instrument failure", "To increase cabin pressurization during takeoff"},
            "To provide redundancy because pump failure during IFR flight causes gradual instrument failure",
            "Vacuum gyro failure can occur insidious and gradually in IFR conditions; redundant dual pumps ensure flight instrument safety.",
            "Think of instrument flying rules (IFR) redundancy."
        },
        {
            "What characterizes a 'wet-type' vacuum pump?",
            {"It uses carbon vanes lubricated by water condensation", "It uses steel vanes lubricated by engine oil dispensed into the pump chamber", "It uses submerged hydraulic impellers"},
            "It uses steel vanes lubricated by engine oil dispensed into the pump chamber",
            "Wet-type pumps use sliding steel vanes lubricated by small amounts of oil which is discharged along with the exhaust air.",
            "Steel vanes require continuous oil lubrication."
        },
        {
            "Why is an oil separator installed downstream of a wet-type vacuum pump?",
            {"To return pressurized oil to the landing gear struts", "To remove oil from discharge air before it inflates rubber deicer boots", "To prevent fuel contamination in the center tank"},
            "To remove oil from discharge air before it inflates rubber deicer boots",
            "Oil damages rubber deicer boots on wing and empennage leading edges, so discharge air must be cleaned by an oil separator.",
            "Oil deteriorates pneumatic rubber deicing boot material."
        },
        {
            "What component maintains constant low pressure inside instrument housings supplied by a vacuum pump?",
            {"Suction-relief valve", "High pressure check valve", "Modulating fan air valve"},
            "Suction-relief valve",
            "Because the pump moves more air volume than needed, a spring-loaded suction-relief valve on the inlet controls depression precisely.",
            "A relief valve on the suction side maintains target vacuum."
        },
        {
            "What type of vanes are used in a 'dry-air' vacuum pump?",
            {"Steel vanes lubricated with grease", "Self-lubricating carbon vanes", "Ceramic roller vanes"},
            "Self-lubricating carbon vanes",
            "Dry air vacuum pumps use self-lubricating carbon vanes, eliminating the need for oil dispensing and oil separators.",
            "Graphite/carbon material is naturally lubricating."
        },
        {
            "What is the primary vulnerability of carbon vanes in dry air vacuum pumps?",
            {"They melt under normal cockpit temperatures", "They are easily broken by foreign particle contamination", "They absorb fuel vapor and seize"},
            "They are easily broken by foreign particle contamination",
            "Carbon vanes are brittle and can fracture if solid contamination enters the pump housing; hence, inlet air must be filtered.",
            "Carbon is brittle compared to steel."
        },
        {
            "How is the lubricating oil level checked on a pneumatic power air compressor during maintenance?",
            {"Via a built-in sight gauge or dipstick", "By weighing the compressor unit on a scale", "By measuring electrical resistance across the motor"},
            "Via a built-in sight gauge or dipstick",
            "Compressor oil level is inspected using an integrated dipstick or sight glass gauge per manufacturer instructions.",
            "Standard visual fluid inspection methods."
        },
        {
            "How is maintenance purging of an aircraft pneumatic system accomplished?",
            {"Flushing liquid degreaser through the main crossover duct", "Pressurizing the system and disconnecting tubes from components to expel contaminants", "Running the APU bleed at max temperature for 4 hours"},
            "Pressurizing the system and disconnecting tubes from components to expel contaminants",
            "Purging is done by pressurizing the system and disconnecting lines at various components to blow out moisture, oil, and particulates.",
            "Blowing high pressure through open pipe ends cleans lines."
        },
        {
            "What must be done to system air bottles following a pneumatic system purging procedure?",
            {"They must be welded shut and replaced", "They should be drained to remove accumulated moisture and impurities", "They must be painted yellow for identification"},
            "They should be drained to remove accumulated moisture and impurities",
            "After purging and reconnecting lines, air storage bottles must be drained of accumulated condensation and debris.",
            "Moisture settles at low drain points in receivers."
        },
        {
            "What crucial safety precaution must be verified before connecting external ground air pressurization?",
            {"All hydraulic systems must be set to max pressure", "At least one cabin door or window must be open to prevent accidental pressurization", "The aircraft fuel tanks must be completely empty"},
            "At least one cabin door or window must be open to prevent accidental pressurization",
            "Whenever ground pneumatic air is connected, an open cabin opening (door/window) ensures the aircraft structure cannot be pressurized accidentally.",
            "Ground personnel safety and door opening hazards."
        },
        {
            "When does the APU bleed valve symbol typically appear on the cockpit ECAM display?",
            {"As soon as the aircraft batteries are turned on", "Only when the APU is running", "Only when the engines are operating at high power"},
            "Only when the APU is running",
            "On modern electronic displays (such as Airbus ECAM), the APU bleed valve indication appears dynamically once the APU is running.",
            "Source availability drives display symbology."
        },
        {
            "When the pneumatic system is pressurized by the APU and the crossbleed switch is in AUTO, what is the normal valve state?",
            {"The crossbleed valve opens automatically.", "The crossbleed valve remains locked closed.", "The engine HP valves open to vent air."},
            "The crossbleed valve opens automatically.",
            "With the crossbleed selector in AUTO, activating APU bleed causes the crossbleed valve to open automatically to feed both sides.",
            "APU bleed feeds the left and right manifolds simultaneously."
        },
        {
            "What does an illuminated FAULT light on an engine bleed switch generally indicate?",
            {"Normal operation of the IP check valve", "An overheat, overpressure, or valve position disagreement in the bleed system", "That the water service panel is open"},
            "An overheat, overpressure, or valve position disagreement in the bleed system",
            "A bleed FAULT light illuminates when parameters exceed limits (e.g. overheat, overpressure) or when a valve disagrees with commanded position.",
            "An abnormal pneumatic system condition."
        },
        {
            "What type of check valve is frequently used in engine bleed ducting to prevent reverse air flow?",
            {"Butterfly type check valve", "Gate valve with handwheel", "Solenoid needle valve"},
            "Butterfly type check valve",
            "Pneumatic systems frequently utilize butterfly-type check (flapper) valves to prevent reverse flow with minimal pressure drop.",
            "A split-disc or hinged flapper design."
        },
        {
            "What is the function of the APU check valve located downstream of the APU bleed load valve?",
            {"To prevent engine bleed air from backflowing into the APU", "To increase APU bleed air temperature", "To modulate cooling air across the APU gearbox"},
            "To prevent engine bleed air from backflowing into the APU",
            "The check valve prevents higher pressure engine bleed air from entering and damaging the APU compressor.",
            "Non-return protection for the auxiliary power unit."
        },
        {
            "What happens to the butterfly plate in a pneumatic bleed valve when closing pressure in the actuator increases?",
            {"The butterfly plate opens further to increase mass flow", "The butterfly plate moves toward the closed position, decreasing downstream pressure", "The butterfly plate locks mechanically in place"},
            "The butterfly plate moves toward the closed position, decreasing downstream pressure",
            "In regulating mode, increasing actuator closing pressure moves the butterfly plate toward closed, restricting flow and reducing downstream pressure.",
            "Closing chamber pressure opposes the opening spring/pressure."
        },
        {
            "What provides position feedback of a pneumatic valve to the pneumatic controller and cockpit indicators?",
            {"Built-in electrical position microswitches or sensors", "Optical sight glasses viewed from the wing root", "Acoustic pingers mounted on the duct"},
            "Built-in electrical position microswitches or sensors",
            "Position switches actuated directly by the valve shaft provide telemetry on whether the valve is open, closed, or in transit.",
            "Electrical contact switches on the actuator shaft."
        },
        {
            "What is the purpose of filters installed on pneumatic valve sensing lines?",
            {"To lubricate the butterfly disc bearings", "To protect actuators and pilot controllers from air duct contamination and particulates", "To reduce the speed of sound inside the pneumatic duct"},
            "To protect actuators and pilot controllers from air duct contamination and particulates",
            "Filters installed where sensing/control air is tapped prevent particulate matter from clogging small pilot orifices and actuator chambers.",
            "Keeping delicate pneumatic servos free of grit and carbon."
        }
    };
}