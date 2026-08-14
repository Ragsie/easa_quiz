#include <vector>
#include "question.h"

std::vector<Question> getATA24Questions() {
    return {
{
    "What is the standard AC voltage and frequency used in the primary AC distribution of most conventional transport aircraft?",
    {"115 V AC at 400 Hz", "230 V AC at 50 Hz", "28 V AC at 400 Hz"},
    "115 V AC at 400 Hz",
    "The standard primary AC network on most modern aircraft operates at 115 V AC with a constant frequency of 400 Hz.",
    "Think of the standard frequency used in aviation to save magnetic core weight."
},
    {
        "What is the typical voltage level used in aircraft DC power distribution systems?",
        {"12 V DC", "24 V DC", "28 V DC"},
        "28 V DC",
        "While aircraft batteries have a nominal voltage of 24 V DC, the operating DC bus network voltage supplied by TRUs or generators is 28 V DC.",
        "Distinguish between battery nominal voltage and bus supply voltage."
    },
    {
        "What is the primary advantage of modern Variable Frequency Generators (VFGs) used on aircraft like the B787 and A350?",
        {"They do not require a Constant Speed Drive (CSD), thereby reducing system weight.", "They eliminate the need for Transformer Rectifier Units (TRUs).", "They produce pure DC power directly without requiring any rectification."},
        "They do not require a Constant Speed Drive (CSD), thereby reducing system weight.",
        "VFGs eliminate the heavy mechanical Constant Speed Drive (CSD) by generating variable frequency AC (360–800 Hz) directly from engine rotation.",
        "Consider which mechanical component is omitted to save significant weight."
    },
    {
        "In a 3-phase AC generator, what is the phase displacement between individual phase windings?",
        {"90 degrees", "120 degrees", "180 degrees"},
        "120 degrees",
        "The three stator coils (phases A, B, and C) are physically and electrically displaced by 120 degrees from each other.",
        "A full circle (360 degrees) is divided equally among the 3 phases."
    },
    {
        "What is the effective line-to-line voltage in a standard 115 V line-to-neutral three-phase aircraft electrical system?",
        {"115 V", "200 V", "230 V"},
        "200 V",
        "In a 3-phase star-connected system, the line-to-line voltage is U_line = U_phase * sqrt(3) (115 V * 1.732 ≈ 200 V).",
        "Multiply the line-to-neutral voltage by the square root of 3."
    },
    {
        "Why is the neutral current flowing through the aircraft structure virtually zero in a balanced three-phase system?",
        {"The algebraic sum of the three equal sinusoidal phase currents displaced by 120 degrees is zero.", "The neutral point is completely isolated and floating from the aircraft structure.", "The current flows exclusively through external return ground wires rather than the fuselage structure."},
        "The algebraic sum of the three equal sinusoidal phase currents displaced by 120 degrees is zero.",
        "Because of the 120-degree phase shift, the instantaneous sum of three identical phase currents is always zero (I_A + I_B + I_C = 0).",
        "Think about the mathematical sum of three sine waves shifted by 120 degrees."
    },
    {
        "How many pole pairs does a standard aircraft AC generator running at 12,000 RPM have to generate 400 Hz?",
        {"1 pole pair", "2 pole pairs", "4 pole pairs"},
        "2 pole pairs",
        "Using the formula f = (n * p) / 60: 400 = (12,000 * p) / 60 => p = (400 * 60) / 12,000 = 2 pole pairs.",
        "Calculate using f = (RPM * p) / 60."
    },
    {
        "Why are modern aircraft generators designed as brushless generators?",
        {"To eliminate brush wear, carbon dust contamination, and hazardous sparking at high altitudes.", "To avoid the requirement of having rotating magnetic fields in the stator.", "To permit direct mechanical connection to the engine without a gearbox."},
        "To eliminate brush wear, carbon dust contamination, and hazardous sparking at high altitudes.",
        "Brushless generators improve reliability and prevent sparking and rapid brush wear in the thin, dry air at high altitudes.",
        "Think about the maintenance and sparking issues associated with slip rings and carbon brushes."
    },
    {
        "What are the three main internal stages of a brushless AC aircraft generator?",
        {"Permanent magnet generator (PMG), exciter generator, and main generator with rotating rectifier.", "Static inverter, CSD hydraulic unit, and main stator.", "Transformer rectifier unit, commutator, and armature windings."},
        "Permanent magnet generator (PMG), exciter generator, and main generator with rotating rectifier.",
        "A brushless generator contains an exciter generator, a rotating diode rectifier bridge on the rotor, and the main generator, often supplemented by a PMG.",
        "Identify the sub-generators and the rectification stage on the rotating shaft."
    },
    {
        "What is the primary function of the Permanent Magnet Generator (PMG) in a modern AC generator?",
        {"To supply independent electrical power directly to the Generator Control Unit (GCU).", "To power the galley ovens during high electrical demand conditions.", "To provide 28 V DC power directly to the aircraft emergency battery bus."},
        "To supply independent electrical power directly to the Generator Control Unit (GCU).",
        "The PMG produces independent AC power as long as the generator rotates, powering the GCU internal circuits even during severe electrical faults.",
        "Think about where the GCU gets its reliable, self-sufficient operating power."
    },
    {
        "Why is oil cooling preferred over air cooling for Integrated Drive Generators (IDGs)?",
        {"Oil cooling provides superior heat dissipation, resulting in smaller and lighter generator designs.", "Oil cooling prevents the differential gear from turning at excessive speeds.", "Air cooling is prohibited on turbine-powered transport category aeroplanes."},
        "Oil cooling provides superior heat dissipation, resulting in smaller and lighter generator designs.",
        "Oil is significantly more efficient at transferring heat than air, allowing higher continuous load ratings in a compact, lightweight unit.",
        "Consider power density and heat transfer efficiency."
    },
    {
        "What does the Constant Speed Drive (CSD) do when engine speed is in the cruise or takeoff range?",
        {"It operates in under-drive mode to reduce the generator input shaft speed to a constant 12,000 RPM.", "It operates in overdrive mode to increase shaft speed to 24,000 RPM.", "It operates in straight drive mode continuously for optimal fuel economy."},
        "It operates in under-drive mode to reduce the generator input shaft speed to a constant 12,000 RPM.",
        "At high engine speeds (cruise and takeoff), the CSD differential gear subtracts speed (under-drive) so the generator turns at the constant rated speed.",
        "Higher engine input speed requires subtracting rotational speed."
    },
    {
        "Why is the CSD straight drive mode only permitted for short transition periods during engine acceleration/deceleration?",
        {"Oil is hydraulically trapped inside the motor-pump unit and cannot circulate to the cooler.", "The differential gear locks mechanically and causes high structural vibration.", "The GCU loses all excitation control signals during straight drive."},
        "Oil is hydraulically trapped inside the motor-pump unit and cannot circulate to the cooler.",
        "During straight drive, the hydraulic pump wobble plate is at zero angle, trapping hydraulic oil inside the unit without cooling flow.",
        "Focus on oil circulation and thermal buildup in the hydraulic pump/motor unit."
    },
    {
        "What happens when the CSD/IDG disconnect push button is pressed in the cockpit?",
        {"An electric solenoid releases a spring-loaded follower that engages a worm gear to separate the dog clutch.", "A hydraulic bypass valve dumps all oil back into the main engine gearbox.", "A pyrotechnic shear pin fractures the primary generator input shaft permanently."},
        "An electric solenoid releases a spring-loaded follower that engages a worm gear to separate the dog clutch.",
        "Energizing the solenoid releases the lower worm follower, which rides up the rotating worm gear and pulls the dog clutch apart against its spring.",
        "Recall the electro-mechanical worm gear and dog clutch mechanism."
    },
    {
        "Why must an IDG/CSD disconnect only be carried out while the engine is running above minimum idle speed?",
        {"Sufficient rotational speed and centrifugal force are required to achieve a clean and complete clutch separation.", "The disconnect solenoid is powered directly by AC generator terminal voltage.", "The engine gearbox will seize if disconnected at zero RPM."},
        "Sufficient rotational speed and centrifugal force are required to achieve a clean and complete clutch separation.",
        "If disconnected at low speed or stationary, the clutch teeth do not fully disengage and will ratchet and suffer mechanical damage.",
        "Think about inertia and the risk of stripping the dog clutch teeth."
    },
    {
        "How is a disconnected CSD/IDG reset after being disconnected in flight?",
        {"It can only be reset manually on the ground with the engine completely stopped by pulling the reset ring.", "It automatically resets when the engine fire handle is pushed back in.", "The pilot toggles the IDG disconnect switch to RESET while at flight idle."},
        "It can only be reset manually on the ground with the engine completely stopped by pulling the reset ring.",
        "Resetting the IDG disconnect mechanism cannot be done in flight; ground personnel must pull the mechanical reset ring with the engine shut down.",
        "Can a mechanical dog clutch be re-engaged in flight?"
    },
    {
        "What is the maximum allowed duration for pressing the IDG disconnect pushbutton switch?",
        {"3 seconds (and not more than once in 60 seconds)", "10 seconds continuously", "30 seconds with no cooling interval required"},
        "3 seconds (and not more than once in 60 seconds)",
        "The disconnect solenoid is designed for short intermittent duty only; energizing it for more than 3 seconds risks burning out the solenoid coil.",
        "The solenoid coil heats up rapidly when energized."
    },
    {
        "What is indicated if the CSD oil 'Rise Temperature' is excessively high while the absolute temperature is elevated?",
        {"The IDG is producing excessive internal mechanical/hydraulic heat due to friction or overload.", "The external oil cooler has lost its cooling airflow or fuel flow entirely.", "The temperature bulb thermistor in the oil out line is completely open-circuit."},
        "The IDG is producing excessive internal mechanical/hydraulic heat due to friction or overload.",
        "Rise temperature (T_out - T_in) represents heat generated within the CSD itself. High rise indicates excessive internal heat generation.",
        "Rise temp is the delta (difference) across the CSD unit."
    },
    {
        "What is the function of a Transformer Rectifier Unit (TRU)?",
        {"To step down 115 V AC to approximately 28 V AC and rectify it into 28 V DC.", "To invert 28 V DC battery power into 115 V AC at 400 Hz for avionics.", "To regulate the generator excitation field current via solid-state switches."},
        "To step down 115 V AC to approximately 28 V AC and rectify it into 28 V DC.",
        "A TRU combines a step-down transformer (115 V AC to ~28 V AC) with a diode rectifier bridge to generate 28 V DC output.",
        "Look at both words: Transformer (AC to AC step-down) + Rectifier (AC to DC)."
    },
    {
        "Why do aircraft TRUs utilize a combination of star (Y) and delta (Δ) secondary transformer windings?",
        {"To produce a 12-pulse rectified output with minimal DC voltage ripple.", "To enable bidirectional power transfer from the DC bus back to the AC bus.", "To prevent electromagnetic interference with HF communication transceivers."},
        "To produce a 12-pulse rectified output with minimal DC voltage ripple.",
        "The 30-degree phase shift between star and delta outputs creates a 12-pulse rectification pattern, producing smooth DC with very low ripple.",
        "Think about phase shift and ripple cancellation in multiphase rectification."
    },
    {
        "What type of storage battery is predominantly used in commercial transport jet aircraft?",
        {"Nickel-Cadmium (Ni-Cd) batteries", "Lead-acid automotive batteries", "Lithium-Sulfur open flooded cells"},
        "Nickel-Cadmium (Ni-Cd) batteries",
        "Ni-Cd batteries are standard due to their low internal resistance, flat discharge curve, excellent low-temperature performance, and long service life.",
        "Common aviation rechargeable chemistry having 20 sintered cells."
    },
    {
        "How many individual cells are connected in series in a standard 24 V nominal aircraft Ni-Cd battery?",
        {"20 cells (each producing approx. 1.2 V nominal)", "12 cells (each producing approx. 2.0 V nominal)", "24 cells (each producing approx. 1.0 V nominal)"},
        "20 cells (each producing approx. 1.2 V nominal)",
        "A standard aircraft Ni-Cd battery consists of 20 series-connected cells, each providing ~1.2 V nominal (20 * 1.2 V = 24 V nominal).",
        "Multiply cell nominal voltage (1.2 V) by cell count to reach 24 V."
    },
    {
        "Why must a Ni-Cd battery never be discharged below 22 V in service?",
        {"It can cause cell polarity reversal in the weakest cell, permanently damaging the battery.", "It triggers an immediate irreversible thermal runaway in the TRU.", "It creates high positive internal gas pressure that bursts the battery outer casing."},
        "It can cause cell polarity reversal in the weakest cell, permanently damaging the battery.",
        "Deep discharging below 22 V can force the weakest cell into reverse polarity, preventing onboard recharging and necessitating workshop overhaul.",
        "Consider what happens to the weakest series cell during severe deep discharge."
    },
    {
        "What dangerous phenomenon can occur during constant-voltage charging of an overheated Ni-Cd battery?",
        {"Thermal runaway", "Electrolyte freezing", "Armature reaction"},
        "Thermal runaway",
        "In a Ni-Cd battery, increasing temperature lowers internal resistance and counter-EMF, drawing higher charging current, which causes further heating and potential fire.",
        "Self-reinforcing vicious cycle between temperature increase and charge current."
    },
    {
        "What protective device is installed in modern aircraft DC systems to prevent battery thermal runaway?",
        {"Battery Charge Limiter (BCL)", "Reverse current cut-out breaker", "Carbon pile resistor"},
        "Battery Charge Limiter (BCL)",
        "The BCL continuously monitors charging current and temperature, opening the battery contactor if an uncontrolled current increase is detected.",
        "Look for the computer/logic unit dedicated to monitoring battery charging parameters."
    },
    {
        "What is the Hot Battery Bus (Battery Direct Bus)?",
        {"A bus permanently connected directly to the battery, even with the battery switch OFF.", "A high-temperature AC bus supplying electric galley ovens and heaters.", "A bus powered exclusively when the CSD oil temperature exceeds normal limits."},
        "A bus permanently connected directly to the battery, even with the battery switch OFF.",
        "The Hot Battery Bus remains continuously energized from the battery to feed critical items like the clock, fire extinguisher squibs, and refueling panel.",
        "Think of circuits that need unswitched power 24/7 on the ground."
    },
    {
        "What is the primary function of a static inverter in an aircraft electrical system?",
        {"To convert 28 V DC battery power into 115 V AC / 400 Hz power without moving parts.", "To convert 115 V AC variable frequency into 28 V DC.", "To control the speed of the engine-driven hydraulic pumps."},
        "To convert 28 V DC battery power into 115 V AC / 400 Hz power without moving parts.",
        "A static inverter uses solid-state electronic switches and transformers to convert DC into clean 115 V / 400 Hz AC for emergency standby instruments.",
        "DC in -> AC out with solid-state electronics."
    },
    {
        "What is meant by an 'Isolated' AC electrical power system architecture?",
        {"Engine generators independently supply their own dedicated AC buses and never operate in parallel.", "All AC generators are hardwired in parallel to a single synchronizing busbar.", "The electrical distribution operates without any connection to the aircraft ground structure."},
        "Engine generators independently supply their own dedicated AC buses and never operate in parallel.",
        "In isolated systems (e.g., Airbus A320), bus tie breakers remain open during normal operation so no two generators feed the same bus simultaneously.",
        "Generators work separately on their own isolated network halves."
    },
    {
        "What conditions must be satisfied before two AC generators can be connected in parallel?",
        {"Voltage difference <= 10 V, frequency difference <= 4 Hz, and phase angle difference <= 30 degrees.", "Voltage difference <= 50 V, frequency identical, and DC bus tie relays closed.", "Both engine N1 RPM indicators reading precisely 100% simultaneously."},
        "Voltage difference <= 10 V, frequency difference <= 4 Hz, and phase angle difference <= 30 degrees.",
        "Paralleling requires strict synchronization: voltage delta <= 10 V, frequency delta <= 4 Hz, and phase angle delta <= 30 deg to avoid destructive circulating currents.",
        "Check the three basic AC synchronization parameters: voltage, frequency, and phase alignment."
    },
    {
        "What is the purpose of the Split System Breaker (SSB) on multi-engine aircraft with multiple external power receptacles?",
        {"To prevent two unsynchronized ground power sources from being connected in parallel.", "To disconnect all non-essential galley loads automatically during engine start.", "To isolate the DC Essential Bus from the Hot Battery Bus."},
        "To prevent two unsynchronized ground power sources from being connected in parallel.",
        "External ground power carts cannot synchronize frequencies and phase angles. The SSB opens to split the distribution network into independent halves.",
        "External power carts cannot be phase-synchronized with each other."
    },
    {
        "What is 'No Break Power Transfer' (NBPT)?",
        {"A momentary paralleling of power sources to transfer bus loads without a power interruption.", "An emergency battery backup system that holds contactors closed during short circuits.", "A permanent parallel connection between engine generators and external ground power."},
        "A momentary paralleling of power sources to transfer bus loads without a power interruption.",
        "NBPT synchronizes the incoming power source with the active source and closes its contactor for up to 200 ms before opening the old source, eliminating voltage dips.",
        "Seamless transfer between power sources without dropping avionics."
    },
    {
        "What happens if the secondary winding of an energized AC Current Transformer (CT) is open-circuited?",
        {"Uncompensated primary magnetic flux induces dangerously high voltage and extreme heat.", "The primary feeder line voltage drops immediately to zero volts.", "The generator control relay permanently latches in the closed position."},
        "Uncompensated primary magnetic flux induces dangerously high voltage and extreme heat.",
        "Without secondary current to oppose the primary magnetic flux, the core saturates and induces extreme voltages that can destroy the CT and present an electrocution hazard.",
        "Think of the transformer turns ratio (1:1000) and uncompensated core flux."
    },
    {
        "What physical effect is utilized by Hall effect sensors to measure DC current non-intrusively?",
        {"The Lorentz force deflects charge carriers in a semiconductor, producing a transverse Hall voltage.", "A bimetal strip bends when exposed to radiant heating from the conductor.", "A permanent magnet rotates a potentiometer wiper proportional to DC current flow."},
        "The Lorentz force deflects charge carriers in a semiconductor, producing a transverse Hall voltage.",
        "Current flowing through a semiconductor in a perpendicular magnetic field experiences the Lorentz force, generating a Hall voltage proportional to the DC current.",
        "Magnetic deflection of moving charge carriers producing a transverse potential difference."
    },
    {
        "What is the distinction between an electrical Contactor and a Breaker-type power relay?",
        {"Contactors require continuous holding current; Breakers latch mechanically or magnetically with pulse operation.", "Contactors are operated manually only; Breakers are strictly operated by electronic GCU logic.", "Contactors are used exclusively for DC circuits; Breakers are used exclusively for AC circuits."},
        "Contactors require continuous holding current; Breakers latch mechanically orミュージ magnetically with pulse operation.",
        "A contactor opens as soon as coil power is removed. A breaker uses a short pulse to close/trip and a permanent magnet to latch without continuous coil power.",
        "Consider continuous coil energization versus pulse-latching operation."
    },
    {
        "What is meant by a 'Trip-Free' aircraft circuit breaker?",
        {"The internal contacts will trip open on an overcurrent fault even if the external knob is held pushed in.", "The circuit breaker can only be reset while the aircraft is airborne in flight mode.", "The breaker operates without any thermal delay during minimal overcurrent conditions."},
        "The internal contacts will trip open on an overcurrent fault even if the external knob is held pushed in.",
        "A trip-free design ensures safety: an overloaded circuit will trip regardless of whether the operating knob is held in or mechanically blocked.",
        "Can a pilot prevent a circuit breaker from tripping by holding the knob in?"
    },
    {
        "What does an orange collar on a cockpit circuit breaker typically indicate?",
        {"It is a circuit breaker that the flight crew may need to pull in accordance with an abnormal/emergency procedure.", "It marks a circuit breaker that is restricted exclusively to ground maintenance personnel.", "It identifies a high-voltage 230 V AC circuit that requires special insulated tooling."},
        "It is a circuit breaker that the flight crew may need to pull in accordance with an abnormal/emergency procedure.",
        "Orange collars visually highlight CBs referenced in flight crew abnormal operating checklists (e.g., to silence nuisance warnings).",
        "Orange signifies operational pilot identification for abnormal checklist actions."
    },
    {
        "What is the purpose of green control knobs on circuit breakers in modern glass-cockpit aircraft?",
        {"They are monitored circuit breakers connected to the electronic warning system (ECAM/EICAS).", "They indicate that the circuit breaker is dedicated exclusively to the green hydraulic system.", "They represent electronic solid-state switches that do not contain a bimetal element."},
        "They are monitored circuit breakers connected to the electronic warning system (ECAM/EICAS).",
        "Green-collared or green-capped CBs have auxiliary monitoring contacts wired to the flight warning system so a tripped state is annunciated on the ECAM/EICAS.",
        "Think of flight crew alerting and ECAM monitoring integration."
    },
    {
        "What is a Solid State Power Controller (SSPC) module?",
        {"An electronic circuit breaker card that uses semiconductor switches, shunts, and microprocessors instead of thermal bimetals.", "A mechanical relay assembly used to switch heavy 200 A engine starter currents.", "A passive LC harmonic filter installed on the output of Variable Frequency Generators."},
        "An electronic circuit breaker card that uses semiconductor switches, shunts, and microprocessors instead of thermal bimetals.",
        "SSPC modules are solid-state power controllers that perform electronic circuit breaking, load monitoring, and virtual CB resets via cockpit displays.",
        "Look for the fully electronic, software-configurable circuit protection device."
    },
    {
        "Where is the Point of Regulation (POR) located in an aircraft AC generating system?",
        {"On the generator side of the Generator Power Relay, near the main distribution bus.", "Directly inside the rotating rectifier assembly on the generator main rotor.", "At the input terminals of the external power ground receptacle cart."},
        "On the generator side of the Generator Power Relay, near the main distribution bus.",
        "Placing the POR near the main bus compensates for the voltage drop along the long feeder cables between the engine pylon and the equipment bay.",
        "Regulation must sense voltage close to where consumers receive power."
    },
    {
        "What is the primary function of the Generator Control Relay (GCR)?",
        {"To connect or interrupt the DC exciter field current supplied to the generator exciter field winding.", "To mechanically decouple the CSD input drive shaft from the engine gearbox.", "To transfer essential AC loads to the Ram Air Turbine (RAT) emergency generator."},
        "To connect or interrupt the DC exciter field current supplied to the generator exciter field winding.",
        "Opening the GCR de-energizes the exciter field winding, collapsing the generator magnetic field and instantly dropping generator output voltage to zero.",
        "The GCR controls generator excitation."
    },
    {
        "What type of protection is provided by Differential Protection in an aircraft electrical network?",
        {"Fast, instantaneous protection against short circuits in the feeder cables between the generator neutral and distribution bus.", "Time-delayed thermal protection against moderate continuous cabin galley overloads.", "Protection against reverse phase rotation when connecting non-standard external ground carts."},
        "Fast, instantaneous protection against short circuits in the feeder cables between the generator neutral and distribution bus.",
        "Differential protection compares neutral CT current with distribution CT current; any discrepancy indicates an insulation fault or short circuit and trips the GCR immediately.",
        "Compares current entering and leaving the generator feeder cable zone."
    },
    {
        "What happens automatically when an AC generator experiences an Underspeed condition (<90% speed during engine shutdown)?",
        {"The Generator Power Relay (GPR) trips open, but the GCR remains closed and the CSD stays connected.", "The CSD dog clutch is mechanically disconnected and must be reset on the ground.", "The Ram Air Turbine (RAT) deploys immediately to supply emergency power."},
        "The Generator Power Relay (GPR) trips open, but the GCR remains closed and the CSD stays connected.",
        "Underspeed occurs routinely on engine shutdown. The GCU simply opens the GPR to isolate the bus without tripping the GCR or disconnecting the CSD.",
        "Normal engine shutdown causes underspeed; it should not latch a permanent failure."
    }
};
}