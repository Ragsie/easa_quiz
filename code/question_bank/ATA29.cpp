#include <vector>
#include "question.h"

std::vector<Question> getATA29Questions() {
    return {
        // ata 29
        {
            "What is the standard hydraulic operating pressure for most commercial civil aircraft?",
            {"1500 psi (103 bar)", "3000 psi (207 bar)", "5080 psi (350 bar)"},
            "3000 psi (207 bar)",
            "Civil aircraft hydraulic systems normally operate at a standard working pressure of 3000 psi, which corresponds to 207 bar.",
            "Consider standard narrow-body and wide-body baseline pressure figures."
        },
        {
            "Why does the Airbus A380 hydraulic system operate at a higher pressure of 5080 psi (350 bar)?",
            {"To use standard mineral hydraulic oil MIL-H 5606.", "To eliminate the requirement for hydraulic reservoirs.", "To generate the required high force without increasing the physical size and weight of hydraulic components."},
            "To generate the required high force without increasing the physical size and weight of hydraulic components.",
            "Increasing system pressure to 350 bar (5080 psi) allows generation of higher forces while keeping actuators, tubing, and components compact and light.",
            "Force equals Pressure multiplied by Area (F = P x A)."
        },
        {
            "Which type of hydraulic pressure is primarily utilized in modern aircraft hydraulic power systems?",
            {"Hydrodynamic pressure produced by high-velocity turbulent flow.", "Hydrostatic pressure produced by static or nearly static fluids.", "Aerodynamic pressure transferred via ram air ducts."},
            "Hydrostatic pressure produced by static or nearly static fluids.",
            "Aircraft hydraulic systems rely on hydrostatic pressure (the transmission of force through confined, nearly static pressurized fluid) rather than hydrodynamic energy.",
            "Think of Pascal's principle in confined fluids."
        },
        {
            "What is the characteristic color of synthetic hydraulic fluid (such as Skydrol or Hyjet)?",
            {"Red", "Violet / Purple", "Amber"},
            "Violet / Purple",
            "Synthetic hydraulic fluids (phosphate ester-based) are dyed violet/purple, whereas mineral-based fluids (e.g. MIL-H-5606) are colored red.",
            "Contrast it with red mineral oil."
        },
        {
            "Why is synthetic hydraulic fluid preferred in modern commercial aircraft despite its toxicity?",
            {"It is completely non-hygroscopic and mixes safely with engine oil.", "It offers low flammability, high chemical stability, and superior thermal performance across wide temperature ranges.", "It is cheaper and does not damage standard paint or rubber seals."},
            "It offers low flammability, high chemical stability, and superior thermal performance across wide temperature ranges.",
            "Synthetic fluids provide excellent fire resistance (low flammability), high resistance to thermal deterioration/oxidation, and low freezing points, making them vital for high-demand aviation use.",
            "Consider fire safety and high-temperature endurance."
        },
        {
            "What is a known disadvantage of synthetic hydraulic fluid compared to mineral oil?",
            {"It has poor lubricating properties at low operating temperatures.", "It is highly hygroscopic (tends to absorb water from the atmosphere) and toxic to humans.", "It freezes at standard sea-level temperatures."},
            "It is highly hygroscopic (tends to absorb water from the atmosphere) and toxic to humans.",
            "Synthetic hydraulic fluid readily absorbs moisture (hygroscopic quality), which can degrade its lubrication and boiling characteristics, and it attacks standard seals, paints, and human tissue.",
            "Think about moisture absorption and handling precautions."
        },
        {
            "What is the primary purpose of pressurizing an aircraft hydraulic reservoir with air?",
            {"To force hydraulic fluid directly past the main relief valve into users.", "To prevent fluid foaming, cavitation, and ensure a positive fluid supply to the pumps at high altitudes.", "To cool the hydraulic return lines before they reach the heat exchanger."},
            "To prevent fluid foaming, cavitation, and ensure a positive fluid supply to the pumps at high altitudes.",
            "Pressurizing the reservoir (typically to ~50 psi / 3.5 bar relative) ensures positive head pressure at the pump inlet to prevent cavitation in thin air at high altitudes and suppresses fluid foaming.",
            "Think of low ambient atmospheric pressure at cruising altitudes."
        },
        {
            "In a hydraulically pressurized reservoir, how is a 50 psi pre-charge generated from 3000 psi system pressure?",
            {"Via a reducing needle orifice in the return manifold.", "By using a stepped piston design where the fluid-contact area is 60 times larger than the system pressure area.", "By an internal high-speed centrifugal impeller driven by the drive shaft."},
            "By using a stepped piston design where the fluid-contact area is 60 times larger than the system pressure area.",
            "The stepped piston balances forces (Fx = Fy). With an area ratio Ay / Ax = 60, system pressure of 3000 psi produces Py = 3000 / 60 = 50 psi in the reservoir.",
            "Recall the formula P1 * A1 = P2 * A2."
        },
        {
            "What is the primary difference between how Airbus and Boeing name their independent hydraulic systems?",
            {"Airbus uses colors (Green, Blue, Yellow), whereas Boeing uses numbers (System 1, 2, 3, 4).", "Airbus names systems by engine position, while Boeing uses letter codes (A, B, Standby).", "Airbus designates systems Left, Center, Right, while Boeing uses color codes."},
            "Airbus uses colors (Green, Blue, Yellow), whereas Boeing uses numbers (System 1, 2, 3, 4).",
            "Airbus traditionally designates hydraulic circuits by color (Green, Blue, Yellow), whereas Boeing identifies them by numbers (1 to 4 on B747) or letters (A, B on B737).",
            "Look at the naming conventions of A320/A340 vs B747."
        },
        {
            "Is there any fluid exchange between independent hydraulic systems on an aircraft?",
            {"Yes, fluid mixes freely inside the Power Transfer Unit (PTU).", "No, all systems operate completely independently with no fluid exchange.", "Yes, during ground pressurized filling via the return manifold."},
            "No, all systems operate completely independently with no fluid exchange.",
            "Hydraulic redundancy requires total fluid isolation between circuits so that a leak or contamination in one circuit cannot deplete or compromise the others.",
            "Consider complete redundancy and isolation against leaks."
        },
        {
            "What happens if a hydraulic filter element becomes excessively contaminated and blocked?",
            {"The entire hydraulic system immediately shuts down via the depressurizing valve.", "The differential pressure increases until a bypass valve opens, allowing unfiltered fluid to continue flowing to prevent starvation.", "The hydraulic pump automatically reverses its rotation to backflush the filter."},
            "The differential pressure increases until a bypass valve opens, allowing unfiltered fluid to continue flowing to prevent starvation.",
            "If a filter clogs, the resulting differential pressure triggers a visual/electrical indicator and eventually forces the spring-loaded bypass valve open to ensure continuous flow to essential systems.",
            "Consider what is worse: contaminated oil or complete loss of hydraulic power."
        },
        {
            "Why can cold hydraulic fluid during a ground test falsely trigger a filter contamination indicator?",
            {"Cold fluid chemically reacts with the magnetic indicator button.", "Cold hydraulic fluid has significantly higher kinematic viscosity, creating high back pressure across the filter mesh.", "Cold fluid shrinks the filter housing and mechanically presses the indicator rod."},
            "Cold hydraulic fluid has significantly higher kinematic viscosity, creating high back pressure across the filter mesh.",
            "High kinematic viscosity of cold fluid causes elevated differential pressure across normal filter pores, which may pop the delta-P clogging indicator even without true particulate contamination.",
            "Think of fluid thickness (viscosity) at low temperatures."
        },
        {
            "What type of pump is primarily used for main system pressure generation in modern jet transport aircraft?",
            {"Fixed displacement centrifugal impeller pumps.", "Axial piston variable displacement pumps (VDP).", "External gear-driven positive displacement pumps."},
            "Axial piston variable displacement pumps (VDP).",
            "Axial piston variable displacement pumps (VDP) automatically regulate output flow to match consumer demand while maintaining constant system pressure (typically 3000 psi).",
            "Look at the mechanism featuring pistons and an adjustable swash/wobble plate."
        },
        {
            "How does a Variable Displacement Pump (VDP) regulate its output flow when user demand decreases?",
            {"An electric throttle reduces the rotation speed of the engine drive shaft.", "System pressure acts on an actuator piston via the compensator valve to decrease the wobble plate (swashplate) angle, reducing piston stroke.", "A bypass dumping valve drains excess high-pressure fluid directly into the atmosphere."},
            "System pressure acts on an actuator piston via the compensator valve to decrease the wobble plate (swashplate) angle, reducing piston stroke.",
            "When pressure reaches ~3000 psi, the compensator valve directs fluid to the control actuator piston, flattening the wobble plate angle and shortening piston stroke to reduce fluid delivery.",
            "Consider the mechanical angle of the swashplate / wobble plate."
        },
        {
            "Why is the pump depressurizing solenoid valve automatically energized during engine starting?",
            {"To test the low-pressure warning switches in the cockpit.", "To flush air bubbles out of the case drain module.", "To reduce hydraulic drag and rotational load on the engine accessory gearbox during spool-up."},
            "To reduce hydraulic drag and rotational load on the engine accessory gearbox during spool-up.",
            "Energizing the depressurization valve drives the pump wobble plate to zero stroke and closes the blocking valve, unburdening the starter motor and gearbox during engine crank.",
            "Think about reducing the torque load on the starter."
        },
        {
            "What is the function of the pump case drain line?",
            {"To collect and route internal cooling and lubrication leakage fluid from the pump back to the reservoir.", "To supply 3000 psi pressurized fluid directly to the flight control actuators.", "To bleed trapped air out of the suction line to the ambient atmosphere."},
            "To collect and route internal cooling and lubrication leakage fluid from the pump back to the reservoir.",
            "Hydraulic fluid that lubricates and cools internal pump pistons and shoe bearings drains into the pump housing (case) and is returned to the reservoir via the case drain line and cooler.",
            "Think of internal leakage used for cooling and lubrication."
        },
        {
            "Where is the hydraulic fluid cooled before returning to the reservoir in a case drain circuit?",
            {"In an air-to-air cooling matrix in the nose radome.", "In a fuel-cooled heat exchanger located inside the aircraft fuel tanks.", "Inside the high-pressure manifold via regenerative heating."},
            "In a fuel-cooled heat exchanger located inside the aircraft fuel tanks.",
            "Case drain return lines are routed through heat exchanger coils installed in the fuel tanks, using fuel as a heat sink to keep hydraulic operating temperature between 60°C and 80°C.",
            "Think of fuel acting as a large heat sink on the aircraft."
        },
        {
            "What is the primary function of the Engine Fire Shutoff Valve (Fire SOV)?",
            {"To vent high-pressure fluid from the EDP into the engine exhaust duct.", "To isolate the hydraulic fluid supply from the reservoir to the Engine Driven Pump in case of an engine fire.", "To extinguish fires inside the engine accessory gearbox using hydraulic fluid."},
            "To isolate the hydraulic fluid supply from the reservoir to the Engine Driven Pump in case of an engine fire.",
            "Operating the engine fire handle/pushbutton commands the motorized Fire SOV closed, cutting off flammable hydraulic fluid flow from the reservoir to the engine nacelle.",
            "Think about preventing flammable oil from feeding an engine compartment fire."
        },
        {
            "What is the operational purpose of a Power Transfer Unit (PTU)?",
            {"To transfer hydraulic fluid from a leaking reservoir to a healthy reservoir.", "To transfer mechanical/hydraulic power between two independent systems without transferring any hydraulic fluid.", "To convert 115 VAC electrical power into 28 VDC emergency backup power."},
            "To transfer mechanical/hydraulic power between two independent systems without transferring any hydraulic fluid.",
            "A PTU couples a hydraulic motor in one system to a hydraulic pump in another via a common drive shaft, transferring power bidirectionally while maintaining total fluid isolation.",
            "Focus on: power transfer YES, fluid transfer NO."
        },
        {
            "How is the Ram Air Turbine (RAT) extended in flight during an emergency?",
            {"By an electric starter motor powered by the main battery.", "By an emergency pyrotechnic charge.", "Mechanically by a powerful deployment spring mechanism when released by cockpit command or auto-logic."},
            "Mechanically by a powerful deployment spring mechanism when released by cockpit command or auto-logic.",
            "The RAT is held stowed against a heavy spring; when unlatched (electrically or manually), the spring rapidly forces the RAT leg out into the slipstream in under one second.",
            "Think of stored mechanical energy that requires no hydraulic or electrical power to deploy."
        },
        {
            "Can the Ram Air Turbine (RAT) be retracted in flight by the flight crew?",
            {"Yes, by selecting the RAT switch to OFF on the overhead panel.", "No, RAT retraction is performed only on the ground by maintenance personnel using hydraulic ground servicing.", "Yes, automatically when airspeed exceeds 300 knots."},
            "No, RAT retraction is performed only on the ground by maintenance personnel using hydraulic ground servicing.",
            "Once deployed, the RAT cannot be stowed in flight; it is hydraulically restowed on the ground by maintenance technicians via the ground service panel.",
            "Deployment is a one-way emergency event in flight."
        },
        {
            "On the Airbus A320 ECAM, at what system pressure threshold does the pressure indication turn amber?",
            {"Below 2500 psi", "Below 1450 psi (100 bar)", "Below 500 psi"},
            "Below 1450 psi (100 bar)",
            "The low pressure warning threshold is 1450 +/- 72.5 psi (100 +/- 5 bar). When system pressure drops below this level, the digital display changes to amber and triggers low-pressure warnings.",
            "It is approximately half of nominal 3000 psi pressure."
        },
        {
            "At what hydraulic fluid return temperature is an ECAM OVHT (Overheat) warning triggered on the A320?",
            {"60°C (140°F)", "92.8°C to >95°C", "150°C (302°F)"},
            "92.8°C to >95°C",
            "The ECAM OVHT advisory turns amber at 92.8°C (199°F), and the discrete temperature switch trips at >95 +/- 2°C, causing MASTER CAUTION, single chime, and FAULT lights.",
            "Normal working temperature is 60-80°C; overheat occurs just below boiling water temperature."
        },
        {
            "How is hydraulic fluid sampled for quality analysis on an Airbus aircraft high-pressure manifold?",
            {"By draining the main reservoir from the top air filler neck.", "Via a needle sampling valve on the HP manifold, using the inverted protective cap to depress the needle.", "By disconnecting the EDP case drain hose while the engine is idling."},
            "Via a needle sampling valve on the HP manifold, using the inverted protective cap to depress the needle.",
            "The HP manifold features a dedicated needle sampling valve where the notch on the unscrewed end cap is used to depress the needle against 3000 psi reduced manifold pressure.",
            "The valve body uses a needle mechanism operated by its screw cap."
        },
        {
            "Why is the ground return connection larger in diameter than the ground pressure connection on a hydraulic service panel?",
            {"To prevent cross-connection and to reduce fluid flow resistance on the suction/return side.", "To allow high-pressure fluid to enter the reservoir faster.", "To fit the pneumatic air charging hose adapter."},
            "To prevent cross-connection and to reduce fluid flow resistance on the suction/return side.",
            "The return/suction line has a larger diameter to minimize flow resistance (back pressure) during ground fluid circulation and avoid cavitation.",
            "Think of flow resistance in low-pressure versus high-pressure lines."
        }
    };
}