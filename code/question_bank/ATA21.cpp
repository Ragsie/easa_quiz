#include <vector>
#include "question.h"

std::vector<Question> getATA21Questions() {
    return {
{
    "What happens to a pneumatically operated pack valve if the electrical power supply to its solenoid is lost?",
    {"It fails to the closed position permanently due to spring force.", "It opens because of the fail-safe philosophy, provided pneumatic pressure is available.", "It remains mechanically locked in its last commanded position."},
    "It opens because of the fail-safe philosophy, provided pneumatic pressure is available.",
    "Because of the fail-safe philosophy, the pack valve opens when the electrical power supply is broken. The solenoid is de-energized to open the valve. However, if pneumatic power is lost entirely, the internal spring will close the valve.",
    "Think about what state is safer for the passengers (getting air vs. getting no air)."
},
    {
        "What are the primary built-in sources of compressed air for the pneumatic system on a jet aircraft?",
        {"The engine compressors and the APU.", "The ram air turbine (RAT) and the brake accumulator.", "The cabin recirculation fans and avionics blowers."},
        "The engine compressors and the APU.",
        "The only built-in air pressure sources are the engine compressors (Engine Bleed Air) and the Auxiliary Power Unit (APU). On the ground, high-pressure ground connectors can also supply pneumatic air.",
        "Consider which components generate compressed air onboard during flight and on ground."
    },
    {
        "Why is bleed air extracted from two different engine compressor stages (IP and HP)?",
        {"To supply different hydraulic systems with varying pressure levels.", "To provide sufficient bleed pressure at engine idle while avoiding excess pressure at high thrust settings.", "To prevent fuel contamination between compressor sections."},
        "To provide sufficient bleed pressure at engine idle while avoiding excess pressure at high thrust settings.",
        "At idle or low engine speeds, the intermediate pressure (IP) stage is insufficient, so the high pressure (HP) stage is used. At higher engine speeds, air is bled from the IP stage to maintain efficiency and avoid overpressure.",
        "Think about engine thrust changes between idle descent and cruise/climb."
    },
    {
        "What protects the intermediate pressure (IP) engine compressor stage against backflow when the HP stage is active?",
        {"An IP check valve.", "A crossbleed isolation valve.", "A pack flow control valve."},
        "An IP check valve.",
        "When the higher pressure (HP) stage supplies the pneumatic system, an IP check valve prevents reverse airflow back into the intermediate compressor stage.",
        "Consider which one-way device prevents backflow into lower pressure stages."
    },
    {
        "According to FAA and EASA regulations, what is the minimum fresh air requirement per person per minute?",
        {"0.150 m3 per minute.", "0.283 m3 per minute (approx. 0.35 kg/min at sea level).", "0.550 m3 per minute."},
        "0.283 m3 per minute (approx. 0.35 kg/min at sea level).",
        "Aviation regulations state that an acceptable limit of fresh air supplied to the cabin is an average of 0.283 m3 per minute per person (about 0.35 kg per minute at sea level).",
        "It corresponds to completely exchanging cabin air every 3 to 5 minutes."
    },
    {
        "What is the maximum allowable cabin altitude under standard commercial aviation regulations?",
        {"6,000 feet.", "8,000 feet (2,400 meters).", "10,000 feet."},
        "8,000 feet (2,400 meters).",
        "Regulations state that commercial aircraft cabins must be pressurized to a cabin altitude not exceeding 8,000 feet (2,400 m) during normal operating flight altitudes.",
        "Think about the standard physiological altitude limit set for passenger aircraft."
    },
    {
        "Which areas of the fuselage are typically UNPRESSURIZED?",
        {"Cockpit, passenger cabin, and avionic compartment.", "Forward cargo, aft cargo, and electronic bay.", "Landing gear bays, radome, and tail cone."},
        "Landing gear bays, radome, and tail cone.",
        "Unpressurized areas are separated by pressure bulkheads and include the landing gear bays, the nose radome, and the unpressurized tail cone.",
        "Look for areas outside the forward and aft pressure bulkheads or wheel wells."
    },
    {
        "What is the function of the catalytic ozone converter installed upstream of the cooling pack?",
        {"To remove dust and solid particles from bleed air.", "To convert harmful atmospheric ozone into harmless oxygen using a catalyst.", "To separate moisture droplets before air enters the primary heat exchanger."},
        "To convert harmful atmospheric ozone into harmless oxygen using a catalyst.",
        "At high flight altitudes, ambient air contains high concentrations of ozone. The catalytic converter breaks down O3 into O2 to protect passenger and crew health.",
        "Think about the chemical formula of ozone transforming to oxygen."
    },
    {
        "How is volumetric airflow kept constant in the pack valve across changing cabin altitudes?",
        {"The pack valve regulating assembly receives a cabin pressure correction signal.", "The pilot adjusts the pack valve trim potentiometer continuously.", "The primary heat exchanger bypass valve expands dynamically."},
        "The pack valve regulating assembly receives a cabin pressure correction signal.",
        "As flight altitude increases and cabin air density drops, mass flow is corrected using a cabin pressure signal to ensure constant volumetric airflow (and air velocity) in the cabin.",
        "Remember that volumetric flow equals mass flow divided by air density."
    },
    {
        "In an Air Cycle Machine (ACM), what drives the compressor and cooling fan?",
        {"An internal high-voltage AC electric motor.", "The expansion turbine mounted on the same common shaft.", "A pneumatic booster pump powered by hydraulic fluid."},
        "The expansion turbine mounted on the same common shaft.",
        "Air cycle machines are bootstrap machines: air expansion through the turbine extracts heat/energy and rotates the shaft, which directly drives the compressor and the cooling fan.",
        "Bootstrap systems are self-sustaining once air flows across the turbine."
    },
    {
        "What happens to bleed air temperature and pressure as it expands across the ACM turbine?",
        {"Pressure increases while temperature decreases dramatically.", "Both pressure and temperature decrease significantly.", "Temperature rises while pressure drops below ambient vacuum."},
        "Both pressure and temperature decrease significantly.",
        "Expanding the compressed air across the turbine extracts thermal and kinetic energy, driving down both the air pressure (to near cabin pressure) and temperature (sub-zero).",
        "Expansion does work and cools the gas."
    },
    {
        "Why is water extracted from bleed air during the cooling cycle?",
        {"To prevent water droplets from freezing in valves/lines and avoid fog or corrosion in the cabin.", "To supply potable water directly to the galleys and lavatories.", "To lubricate the air bearing surfaces inside the air cycle machine."},
        "To prevent water droplets from freezing in valves/lines and avoid fog or corrosion in the cabin.",
        "Sub-zero temperatures inside the pack would cause condensed moisture to freeze, clogging ducts and valves. Water in the cabin would cause fogging, passenger discomfort, and structural corrosion.",
        "Consider what freezing droplets do to downstream ducts and cabin comfort."
    },
    {
        "Where is the separated condensed water routed to enhance pack performance?",
        {"To the aircraft gray water drain mast.", "To the ram air inlet duct to spray onto the heat exchangers.", "Back into the engine bleed air pre-cooler."},
        "To the ram air inlet duct to spray onto the heat exchangers.",
        "Water collected by water extractors or separators is sprayed into the ram air duct via aspirators/injectors to improve the cooling efficiency of the heat exchangers through evaporative cooling.",
        "Think about evaporative cooling assisting the ram airflow."
    },
    {
        "In a high-pressure water separation system, which component cools the air to its dew point before the water extractor?",
        {"The condenser, which uses cold turbine discharge air as cooling medium.", "The ozone converter catalytic bed.", "The skin heat exchanger located in the tail cone."},
        "The condenser, which uses cold turbine discharge air as cooling medium.",
        "In a high-pressure system, air leaving the reheater enters the condenser, where sub-zero air from the turbine outlet cools it down to its dew point (around 0 °C) so moisture condenses.",
        "Look for the heat exchanger directly upstream of the high-pressure water extractor."
    },
    {
        "What is the purpose of the anti-ice valve in a high-pressure pack cycle?",
        {"To heat the engine nacelle lip against severe atmospheric icing.", "To inject hot bleed air downstream of the turbine to prevent ice blockage in the condenser.", "To spray de-icing fluid across the ram air inlet screen."},
        "To inject hot bleed air downstream of the turbine to prevent ice blockage in the condenser.",
        "If differential pressure sensors across the condenser detect ice formation, the anti-ice valve opens to supply hot bleed air to the turbine outlet, melting the ice accumulation.",
        "Think about how differential pressure across the condenser indicates freezing."
    },
    {
        "During takeoff and landing, why do the ram air inlet doors move to the fully closed position?",
        {"To reduce aerodynamic drag and save engine fuel.", "To prevent ingestion of foreign objects, slush, or debris into the ram air ducts.", "To prevent cabin overpressurization while on the runway."},
        "To prevent ingestion of foreign objects, slush, or debris into the ram air ducts.",
        "Ram air inlet doors close during takeoff and landing runs to protect the heat exchangers and ram air ducts from debris, water, slush, or bird ingestion.",
        "Consider runway debris hazards during high-speed ground roll."
    },
    {
        "What is the primary role of the cabin recirculation fans?",
        {"To reduce bleed air demand by mixing filtered cabin air with cold pack air in the mixer unit.", "To blow air directly through the wing anti-ice ducts.", "To maintain negative pressure inside the unpressurized wheel bays."},
        "To reduce bleed air demand by mixing filtered cabin air with cold pack air in the mixer unit.",
        "Recirculation fans draw air from the cabin underfloor, pass it through HEPA filters, and return it to the mixing unit, reducing engine bleed air consumption and saving fuel.",
        "Recirculation allows lower pack flow while keeping cabin ventilation high."
    },
    {
        "How is individual temperature control achieved for different cabin zones?",
        {"By adjusting separate engine bleed pressure regulator valves for each seat row.", "By adding hot trim air via electrically operated trim air valves to the cold supply air.", "By opening and closing individual outflow valves in each seating section."},
        "By adding hot trim air via electrically operated trim air valves to the cold supply air.",
        "The mixing unit supplies cold base air. Individual zone duct temperatures are regulated by adding controlled amounts of hot trim air via dedicated zone trim air valves.",
        "Base cold air is tailored per zone using modulated hot air."
    },
    {
        "How does the zone controller determine the pack temperature demand sent to the pack controllers?",
        {"It calculates the average temperature of all cabin zones.", "It selects the coolest duct temperature demand among all active zones.", "It matches the hottest zone setting selected on the cockpit overhead panel."},
        "It selects the coolest duct temperature demand among all active zones.",
        "The pack controllers must deliver air cold enough to satisfy the zone requiring the lowest temperature (coolest demand); other warmer zones then add hot trim air.",
        "The packs must produce the lowest required temperature in the entire aircraft."
    },
    {
        "What occurs automatically if a zone supply duct temperature exceeds the critical safety limit (approx. 90 °C)?",
        {"The engine bleed valves immediately shut down completely.", "The trim air pressure regulating valve and all trim air valves close automatically.", "The cabin outflow valves drive to full open."},
        "The trim air pressure regulating valve and all trim air valves close automatically.",
        "When duct overheat is detected by protection switches (around 90 °C), a cockpit FAULT illuminates and the trim air pressure regulating valve closes, isolating the hot trim air supply.",
        "Overheat protection immediately shuts off the source of hot air."
    },
    {
        "Why is the trim air pressure regulating valve designed to maintain trim air at a constant differential above cabin pressure?",
        {"To prevent cabin decompression through the trim air lines.", "To ensure stable trim airflow across all trim valves regardless of individual valve movements.", "To boost turbine speed inside the bootstrap cooling unit."},
        "To ensure stable trim airflow across all trim valves regardless of individual valve movements.",
        "Regulating trim duct pressure to a fixed value (e.g., 4 psi above cabin pressure) prevents pressure variations in one trim valve from disturbing the airflow in adjacent zone trim lines.",
        "Stable duct pressure keeps multi-zone adjustments independent."
    },
    {
        "How is the flight deck (cockpit) air supply protected against recirculation odors and contaminants?",
        {"Cockpit air is dedicated fresh pack air taken directly from upstream of or dedicated ports in the mixing unit.", "Cockpit air comes entirely from the galley exhaust duct.", "The cockpit uses compressed nitrogen bottles during cruise."},
        "Cockpit air is dedicated fresh pack air taken directly from upstream of or dedicated ports in the mixing unit.",
        "To ensure optimum working conditions and flight safety, the cockpit is supplied with 100% fresh air directly from the packs or from a dedicated fresh-air tap in the mixer unit.",
        "Pilots require uncontaminated fresh air at all times."
    },
    {
        "What is the purpose of the emergency ram air inlet flap on the fuselage?",
        {"To provide fresh ventilation air to the mixing unit if all air conditioning packs fail in flight.", "To cool the hydraulic reservoirs during emergency gear extension.", "To dump excess cabin pressure if the outflow valves jam shut."},
        "To provide fresh ventilation air to the mixing unit if all air conditioning packs fail in flight.",
        "In the rare event of a dual/all pack failure, the emergency ram air inlet is opened to supply ambient unpressurized ram air directly to the mixing unit for cabin breathing and ventilation.",
        "Think about unpressurized emergency airflow when no air packs are running."
    },
    {
        "In a non-ventilated cargo compartment, how is airflow routed?",
        {"Cabin air enters freely through open louvers in the cargo floor.", "Cabin air is completely blocked; air flows around the outside of the airtight compartment to the outflow valve.", "Bleed air is injected directly through high-velocity floor nozzles."},
        "Cabin air is completely blocked; air flows around the outside of the airtight compartment to the outflow valve.",
        "Non-ventilated cargo compartments are airtight boxes for baggage/freight. Discharged cabin air flows around the exterior walls toward the outflow valves without entering.",
        "Airtight compartments prevent smoke and odor ingress/egress."
    },
    {
        "What safety action occurs to cargo compartment isolation valves if smoke/fire is detected in the cargo hold?",
        {"They open fully to blow smoke overboard through the extraction fan.", "Both inlet and outlet isolation valves close to seal the compartment and starve the fire of oxygen.", "The trim air modulation valve drives to maximum heat to incinerate smoke."},
        "Both inlet and outlet isolation valves close to seal the compartment and starve the fire of oxygen.",
        "In the event of cargo smoke detection or fire suppression discharge, isolation valves close immediately to cut off airflow, contain the fire, and retain extinguishing agent.",
        "Sealing the hold deprives the fire of fresh air/oxygen."
    },
    {
        "How are lavatories and galleys ventilated to prevent odors from spreading to the passenger cabin?",
        {"Air is blown directly from the cargo hold into the lavatories.", "An extraction fan continuously draws cabin air through grills into the ceiling duct and vents it near the outflow valve.", "Recirculation fans pump galley air directly into the flight deck riser ducts."},
        "An extraction fan continuously draws cabin air through grills into the ceiling duct and vents it near the outflow valve.",
        "Lavatory and galley air is continuously extracted by dedicated exhaust fans and routed overboard via the outflow valve area to maintain negative pressure and contain odors.",
        "Extraction fans suck air out towards overboard exhaust points."
    },
    {
        "What are the two normal automatic operating modes of the avionics equipment cooling system?",
        {"Cruise mode and Emergency mode.", "Inboard mode (flight/cold) and Outboard mode (ground/warm).", "High-pressure stage and Low-pressure stage."},
        "Inboard mode (flight/cold) and Outboard mode (ground/warm).",
        "On the ground in warm ambient conditions, outboard mode draws outside air via the skin inlet valve and discharges it overboard. In flight, inboard mode recirculates/exhausts air to the underfloor area.",
        "Consider where the exhaust air goes: inside the aircraft vs. overboard."
    },
    {
        "What is the function of a skin heat exchanger in the avionics cooling system?",
        {"To heat the passenger windows using hot avionics exhaust.", "To cool recirculated avionics air through the cold outer aircraft aluminum skin during high-altitude cruise.", "To prevent aerodynamic icing on the cockpit windshield."},
        "To cool recirculated avionics air through the cold outer aircraft aluminum skin during high-altitude cruise.",
        "At cruise altitudes where skin temperature is around -56 °C, warm avionics air passes through ducts directly beneath the fuselage skin, transferring heat to ambient without taking outside air.",
        "Cold ambient air chills the metal aircraft skin."
    },
    {
        "In the avionics cooling system, what occurs when the smoke override mode is activated?",
        {"The supply and extract fans are turned on high speed, and the skin inlet valve opens fully.", "The fans stop, the extract valve opens, and cabin differential pressure draws smoke overboard.", "The trim air valve injects 90 °C air into the electronic bay to vaporize smoke."},
        "The fans stop, the extract valve opens, and cabin differential pressure draws smoke overboard.",
        "In smoke override, cooling fans stop to prevent spreading smoke, the extractor valve opens, and differential pressure pulls air from the cockpit/cabin across the equipment and dumps it overboard.",
        "Cabin differential pressure acts as the natural vacuum source."
    },
    {
        "What is the standard recommended limit for normal positive cabin rate of climb (depressurization rate)?",
        {"100 ft/min.", "500 ft/min.", "1,500 ft/min."},
        "500 ft/min.",
        "To prevent ear discomfort and barotrauma for passengers and crew, cabin climb rates should not exceed +500 ft/min, while cabin descent rates are restricted to -300 ft/min.",
        "Climbing (pressure drop) is usually limited to 500 ft/min."
    },
    {
        "Why is cabin descent rate restricted to a lower value (-300 ft/min) than cabin climb rate (+500 ft/min)?",
        {"Because the outflow valve electric motor is weaker in the closing direction.", "Because the human ear equalizes increasing pressure (descent) less easily than decreasing pressure (climb).", "To prevent sudden condensation in the water separator coalescer."},
        "Because the human ear equalizes increasing pressure (descent) less easily than decreasing pressure (climb).",
        "The Eustachian tube vents expanding air easily during climb, but equalizing higher external pressure during cabin descent is harder, requiring a slower rate of pressure change (-300 ft/min).",
        "Think about ear clearing difficulties during aircraft descent."
    },
    {
        "What is differential pressure (Delta P) in aircraft pressurization?",
        {"The pressure difference between the engine compressor IP stage and HP stage.", "The difference between absolute internal cabin pressure and external ambient atmospheric pressure.", "The pressure loss across the pack primary heat exchanger."},
        "The difference between absolute internal cabin pressure and external ambient atmospheric pressure.",
        "Cabin differential pressure (Delta P) is the pressure exerted by the internal cabin atmosphere minus the outside ambient atmospheric pressure, defining fuselage structural hoop stress.",
        "Internal cabin pressure minus outside ambient pressure."
    },
    {
        "What happens during the pre-pressurization mode prior to takeoff roll?",
        {"The outflow valves drive fully open to vent all cabin fumes.", "The outflow valves modulate slightly closed to increase cabin pressure slightly below airport elevation.", "The ditching pushbutton activates to close all skin valves."},
        "The outflow valves modulate slightly closed to increase cabin pressure slightly below airport elevation.",
        "Pre-pressurization increases cabin pressure (cabin altitude decreases 100-200 ft below field elevation) to stabilize fuselage structure, eliminate pressure surges on rotation, and check for leaks.",
        "Slightly pressurizing the fuselage before liftoff prevents pressure bumps."
    },
    {
        "What triggers the abort mode in modern cabin pressure controllers?",
        {"A complete electrical failure of AC motor 1 on the outflow valve.", "The pilot interrupting the climb phase and beginning a descent back to the departure airport.", "An overheat signal from the zone trim air anticipator sensor."},
        "The pilot interrupting the climb phase and beginning a descent back to the departure airport.",
        "If a flight is aborted during climb and descent starts, the CPC automatically activates abort mode, scheduling cabin pressure back down to the departure airfield elevation.",
        "Returning to the takeoff airport without manual controller reprogramming."
    },
    {
        "How are modern outflow valves powered to guarantee operation under both normal and emergency electrical configurations?",
        {"By hydraulic actuators connected to the Blue and Green hydraulic circuits.", "By two independent AC motors for automatic CPC channels and one DC motor for manual control.", "By pneumatic bellows driven exclusively by engine bleed air."},
        "By two independent AC motors for automatic CPC channels and one DC motor for manual control.",
        "The outflow valve incorporates 2 AC electric motors (one per digital CPC controller) and 1 DC electric motor connected to the cockpit manual toggle switch, operable from the emergency DC bus.",
        "2 AC motors for auto controllers + 1 DC motor for manual backup."
    },
    {
        "At what cabin altitude must passenger oxygen masks automatically deploy from ceiling compartments?",
        {"8,000 feet.", "10,000 feet.", "14,000 feet."},
        "14,000 feet.",
        "At 10,000 ft, crew warnings sound; at 14,000 ft cabin altitude, passenger oxygen masks deploy automatically; at 15,000 ft, outflow valves are forced to close.",
        "Recall the safety sequence: 10,000 ft (warning), 14,000 ft (masks), 15,000 ft (valve shutoff)."
    },
    {
        "What is the safety threshold altitude at which outflow valves must automatically close regardless of controller command?",
        {"10,000 feet.", "12,000 feet.", "15,000 feet."},
        "15,000 feet.",
        "To preserve remaining cabin air and protect life during decompression, safety limit circuits automatically force the outflow valves closed when cabin altitude exceeds 15,000 ft.",
        "The ultimate automatic sealing threshold for outflow valves."
    },
    {
        "What is the purpose of positive pressure relief valves (safety valves)?",
        {"To dump cabin air quickly when descending through 10,000 feet.", "To protect the fuselage structure from rupture by opening if differential pressure exceeds safe limits (e.g. ~8.5 psi).", "To supply ambient ram air when the pack valve fails to open."},
        "To protect the fuselage structure from rupture by opening if differential pressure exceeds safe limits (e.g. ~8.5 psi).",
        "Safety valves are spring-loaded positive pressure relief valves that open automatically when Delta P exceeds maximum structural limits (e.g. 8.5 to 9.0 psi) to prevent fuselage rupture.",
        "Structural protection against overpressure."
    },
    {
        "Why is negative differential pressure hazardous to an aircraft fuselage?",
        {"Because it causes fuel from center tanks to siphon into the passenger cabin.", "Because the aircraft skin and frames are thin and designed primarily to withstand tension (internal outward pressure), not compression buckling.", "Because it forces the air cycle machine to spin in reverse."},
        "Because the aircraft skin and frames are thin and designed primarily to withstand tension (internal outward pressure), not compression buckling.",
        "Aircraft fuselage skin sheets are very thin in order to save weight; they have immense tensile strength against internal pressure but buckle easily under external inward crushing loads.",
        "Think of a beverage can: strong under internal pressure, easily crushed inward."
    },
    {
        "What component prevents negative differential pressure by allowing ambient air to enter the fuselage if external pressure exceeds cabin pressure?",
        {"The negative pressure relief valve / diaphragm assembly.", "The water separator relief valve.", "The ozone catalytic converter bypass flap."},
        "The negative pressure relief valve / diaphragm assembly.",
        "Negative pressure relief valves open inward whenever external atmospheric pressure is greater than cabin pressure, equalizing pressure and preventing fuselage skin collapse.",
        "Inward opening valve relieving external pressure."
    },
    {
        "What precaution must be taken regarding fluid reservoirs (e.g., potable water tanks) before conducting a cabin pressure leakage test?",
        {"They must be completely drained and left unvented.", "They must be filled or vented properly to prevent tank structural damage under abnormal absolute pressure.", "They must be pressurized with high-pressure nitrogen to 3,000 psi."},
        "They must be filled or vented properly to prevent tank structural damage under abnormal absolute pressure.",
        "During high-pressure cabin leakage tests (~4 psi over ambient on ground), closed liquid tanks can implode or rupture; maintenance manuals require filling or opening relief ports.",
        "Incompressible liquids or proper venting protect rigid tanks from crushing."
    },
    {
        "What happens to the aircraft ditching pushbutton function when activated on the cockpit overhead panel?",
        {"It dumps all fuel from wing tanks and extends the landing flaps fully.", "It closes all outflow valves, emergency ram air doors, pack flow control valves, and skin valves below the flotation line.", "It deploys the emergency ram air turbine and disconnects all engine generators."},
        "It closes all outflow valves, emergency ram air doors, pack flow control valves, and skin valves below the flotation line.",
        "Activating DITCHING seals the lower fuselage below the waterline by closing outflow valves, pack valves, avionics cooling skin valves, and ram air doors to keep water out during water landing.",
        "Sealing all openings below the flotation line to stay afloat."
    },
    {
        "How do cabin blowout panels protect internal aircraft bulkheads and floors during sudden decompression?",
        {"They inflate life rafts into the cargo hold.", "They blow out of their frames to equalize pressure rapidly between compartments and prevent floor collapse.", "They inject extinguishing halon gas into the avionics bay."},
        "They blow out of their frames to equalize pressure rapidly between compartments and prevent floor collapse.",
        "Equalization valves handle small pressure differences, but in rapid decompression, large blowout panels release instantly from their latches so air equalizes before floor structures collapse.",
        "Rapid pressure equalization across internal partitions."
    }
};
}