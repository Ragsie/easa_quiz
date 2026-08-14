#include <vector>
#include "question.h"

std::vector<Question> getATA35Questions() {
    return {
        // ata 35
        {
            "What is the standard sea-level air pressure and temperature according to ISA (International Standard Atmosphere)?",
            {"1013.25 mbar (hPa) and 15 degrees Celsius.", "1000.00 mbar and 20 degrees Celsius.", "1025.50 mbar and 0 degrees Celsius."},
            "1013.25 mbar (hPa) and 15 degrees Celsius.",
            "According to the ICAO International Standard Atmosphere (ISA), mean sea level (MSL) conditions are defined as an air pressure of 1013.25 hPa (mbar), a temperature of 15°C, and an air density of 1.225 kg/m3.",
            "Think of standard atmospheric conditions at mean sea level (MSL)."
        },
        {
            "What is the volumetric composition of dry atmospheric air at sea level?",
            {"78% Nitrogen, 21% Oxygen, and 1% Inert gases.", "50% Nitrogen, 40% Oxygen, and 10% Carbon dioxide.", "80% Nitrogen, 19% Oxygen, and 1% Water vapour."},
            "78% Nitrogen, 21% Oxygen, and 1% Inert gases.",
            "Atmospheric air consists of approximately 78% nitrogen, 21% oxygen, and 1% inert gases such as argon.",
            "Nitrogen is the dominant component of air."
        },
        {
            "At what altitude has the usable amount of oxygen inhaled halved compared to sea level?",
            {"At approximately 18,000 feet.", "At approximately 8,000 feet.", "At approximately 33,000 feet."},
            "At approximately 18,000 feet.",
            "As altitude increases, air pressure and density decrease; at approximately 18,000 feet, the amount of usable oxygen inhaled is halved compared to sea level.",
            "It is around midway to the typical cruising flight levels."
        },
        {
            "What is the cabin pressure typically maintained at during normal cruising flight in modern aircraft?",
            {"An equivalent cabin altitude of about 8,000 feet.", "An equivalent cabin altitude of sea level (0 feet).", "An equivalent cabin altitude of 14,000 feet."},
            "An equivalent cabin altitude of about 8,000 feet.",
            "Modern pressurized aircraft cabins maintain a cruising cabin pressure equivalent to approximately 8,000 feet to provide a safe and comfortable environment.",
            "Think of a typical mountain resort elevation."
        },
        {
            "Above what cabin altitude do humans enter the 'zone of incomplete compensation' where judgment and memory are impaired?",
            {"Between approximately 15,000 and 20,000 feet.", "Between 5,000 and 8,000 feet.", "Above 40,000 feet only."},
            "Between approximately 15,000 and 20,000 feet.",
            "Between 15,000 and 20,000 feet is the zone of incomplete compensation. Here, individuals suffer loss of concentration, partial memory loss, loss of judgment, and may experience euphoria.",
            "This occurs well above the automatic passenger mask deployment threshold."
        },
        {
            "What is the estimated time of useful consciousness (TUC) during a rapid decompression at 40,000 feet?",
            {"Approximately 15 seconds.", "Around 3 to 5 minutes.", "More than 10 minutes."},
            "Approximately 15 seconds.",
            "If a rapid decompression occurs at 40,000 feet, the time before useful consciousness is lost is extremely short, around 15 seconds.",
            "You only have seconds to put on an oxygen mask at high flight levels."
        },
        {
            "Why is Aviators Breathing Oxygen (ABO) used on aircraft instead of medical or technical oxygen?",
            {"Because it is extremely dry and prevents moisture from freezing at cold high-altitude temperatures.", "Because it is mixed with scented oils for passenger comfort.", "Because it contains higher moisture to prevent throat dryness."},
            "Because it is extremely dry and prevents moisture from freezing at cold high-altitude temperatures.",
            "Aviators breathing oxygen is specially dried. Medical oxygen contains water droplets that would freeze at low temperatures, and technical oxygen may contain toxic impurities.",
            "Consider what freezing moisture would do to lines and regulators at altitude."
        },
        {
            "What danger arises when high-pressure oxygen comes into contact with oils or greases?",
            {"Spontaneous combustion without the requirement of an external spark or heat source.", "The oxygen instantly solidifies and blocks the supply lines.", "The grease neutralizes the pressure within the cylinder."},
            "Spontaneous combustion without the requirement of an external spark or heat source.",
            "Oxygen causes spontaneous combustion upon contact with oils and greases due to hydrocarbons with low ignition points. External heat or open flame is not required.",
            "Hydrocarbons react violently and spontaneously in high-concentration oxygen."
        },
        {
            "Why must oxygen bottle valves and manual control valves be opened slowly?",
            {"To prevent ignition caused by friction and adiabatic compression heat in empty lines.", "To prevent freezing of the cylinder outlet seal.", "To prevent the flow indicator from registering false values."},
            "To prevent ignition caused by friction and adiabatic compression heat in empty lines.",
            "Opening valves rapidly into empty lines creates extreme rapid pressure rise and friction-generated heat, which can ignite internal materials.",
            "Rapid pressurization generates sudden localized heat."
        },
        {
            "What is the standard cylinder color for aviator's gaseous oxygen storage bottles?",
            {"Dark green.", "Bright yellow.", "Light blue with red stripes."},
            "Dark green.",
            "Aviation breathing oxygen cylinders are painted dark green for immediate standardized identification.",
            "Look for the standard aviation green color."
        },
        {
            "What is the standard maximum rated storage pressure of a flight crew oxygen bottle at NTPD (21°C)?",
            {"1850 psi.", "3000 psi.", "800 psi."},
            "1850 psi.",
            "At Normal Temperature Pressure Dry (NTPD, 21°C), standard crew oxygen cylinders are charged to a maximum pressure of 1850 psi.",
            "The standard charging figure is just under 2000 psi."
        },
        {
            "What safety device protects the crew oxygen cylinder from catastrophic overpressure?",
            {"A safety burst disk (frangible disk) that discharges overboard.", "A spring-loaded check valve venting into the avionics bay.", "An electronic thermal breaker."},
            "A safety burst disk (frangible disk) that discharges overboard.",
            "A safety burst disk fractures if cylinder pressure reaches roughly 2600 psi (e.g. from overheat or overfilling), routing the gas directly overboard.",
            "It bursts to relieve pressure before the bottle can rupture."
        },
        {
            "How can maintenance personnel externally determine if an oxygen cylinder has suffered an overpressure discharge?",
            {"A green plastic discharge indicator disk on the aircraft fuselage skin will be ruptured or blown out.", "A flashing red beacon on the tail fin is activated.", "An amber pop-out pin emerges on the nose gear strut."},
            "A green plastic discharge indicator disk on the aircraft fuselage skin will be ruptured or blown out.",
            "Overboard discharge lines terminate at an indicator on the outer skin with a green indicator disk that blows out when gas vents.",
            "Check the external fuselage indicator disk near the access panel."
        },
        {
            "If a crew oxygen bottle pressure gauge reads less than 50 psi, what maintenance action is required?",
            {"The bottle must NOT be refilled on the aircraft and must be removed to a workshop for servicing.", "It can simply be refilled in situ to 1850 psi using the external ground cart.", "It must be purged with shop air before topping up."},
            "The bottle must NOT be refilled on the aircraft and must be removed to a workshop for servicing.",
            "If pressure drops below 50 psi, atmospheric moisture may have contaminated the interior. The cylinder must be removed to an approved workshop.",
            "Low pressure risks internal moisture contamination."
        },
        {
            "What is the purpose of a thermal compensator on an oxygen bottle filling connection?",
            {"To dissipate concentrated heat generated during rapid refilling across a large surface area.", "To heat the oxygen when flying in Arctic conditions.", "To cool the regulator during emergency descents."},
            "To dissipate concentrated heat generated during rapid refilling across a large surface area.",
            "Refilling generates recompression heat. The thermal compensator acts like an internal heat dissipator (with a brush-like structure) to prevent hot spots.",
            "It mitigates the risk of heat concentration during cylinder charging."
        },
        {
            "What rule applies to the thermal compensator B-nuts during maintenance?",
            {"Do NOT disconnect the compensator B-nuts; if disconnected, the entire unit must be replaced.", "They must be loosened and lubricated with grease every 500 flight hours.", "They must be torqued open to bleed air prior to each refill."},
            "Do NOT disconnect the compensator B-nuts; if disconnected, the entire unit must be replaced.",
            "The thermal compensator is supplied as an integral assembly. Disconnecting the B-nuts compromises integrity, requiring total unit replacement.",
            "Check the explicit maintenance warning tag on the B-nut assembly."
        },
        {
            "On Airbus aircraft (e.g. A320), how is oxygen supplied from the low-pressure manifold to the cockpit masks?",
            {"By pressing the CREW SUPPLY pushbutton on the overhead panel to energize open a solenoid valve.", "It flows continuously without any electrical control or cockpit switch.", "By manually opening a mechanical tap located behind the captain's seat."},
            "By pressing the CREW SUPPLY pushbutton on the overhead panel to energize open a solenoid valve.",
            "On Airbus A320, the low-pressure crew supply solenoid valve must be selected ON via the CREW SUPPLY pushbutton to deliver oxygen to the mask boxes.",
            "Airbus utilizes an overhead pushbutton controlling an electric supply solenoid."
        },
        {
            "On the A320 ECAM DOOR/OXY page, when does the oxygen pressure indication change to amber?",
            {"When bottle pressure drops below 400 psi or when low pressure is detected on the LP circuit.", "When bottle pressure exceeds 1850 psi.", "Only when the passenger system is manually deployed."},
            "When bottle pressure drops below 400 psi or when low pressure is detected on the LP circuit.",
            "On the ECAM, OXY displays amber if cylinder pressure is < 400 psi, if low pressure (50 psi) is detected downstream, or if the crew supply switch is OFF.",
            "Amber signals a low pressure warning state on ECAM."
        },
        {
            "What requirement exists for the quick donning flight crew oxygen masks regarding deployment speed?",
            {"The mask must be capable of being donned with one hand in less than 5 seconds.", "The mask takes 30 seconds to don using both hands.", "The mask is automatically fitted over the face by pneumatic rams."},
            "The mask must be capable of being donned with one hand in less than 5 seconds.",
            "Flight crew full face quick-donning masks must be deployable and securely wearable with one hand in under 5 seconds, even over eyeglasses.",
            "Time is critical in high altitude decompressions—one hand, under 5 seconds."
        },
        {
            "How does the flight crew mask inflatable harness operate during donning?",
            {"Pressing the red grips inflates the harness with oxygen to expand it; releasing them deflates it for a snug fit.", "Pulling an elastic cord tightens a set of metal springs.", "Air pressure from the engines inflates the rubber forehead cushions permanently."},
            "Pressing the red grips inflates the harness with oxygen to expand it; releasing them deflates it for a snug fit.",
            "Squeezing the red inflation levers uses oxygen pressure to expand the rubber harness tubes. Releasing the levers allows elastic contraction around the head.",
            "Squeezing inflates/expands the harness; releasing grips the pilot's head."
        },
        {
            "What are the three operating modes of the crew mask diluter demand regulator?",
            {"Normal, 100% Oxygen, and Emergency (Overpressure).", "Economy, High Flow, and First Aid.", "Standard, Passenger Bridge, and Smoke Purge."},
            "Normal, 100% Oxygen, and Emergency (Overpressure).",
            "The diluter demand regulator provides: Normal (demand air/O2 mix up to ~35,000 ft), 100% (pure oxygen on demand), and Emergency (continuous positive overpressure).",
            "Demand mix, pure demand, and positive continuous overpressure."
        },
        {
            "When is the Emergency (continuous overpressure) setting on the crew oxygen mask diluter demand regulator used?",
            {"At very high cabin altitudes and to prevent smoke or toxic cockpit fumes from entering the mask.", "During standard cruise to save oxygen cylinder capacity.", "Exclusively on the ground during pre-flight checks."},
            "At very high cabin altitudes and to prevent smoke or toxic cockpit fumes from entering the mask.",
            "Positive pressure forces gas slightly outward, preventing hazardous cockpit smoke or toxic fumes from leaking inward past the mask seal.",
            "Positive pressure keeps toxic smoke out of the mask."
        },
        {
            "At what cabin altitude does the passenger oxygen system automatically deploy the passenger masks?",
            {"When cabin altitude reaches approximately 14,000 feet.", "When cabin altitude reaches 8,000 feet.", "When the aircraft reaches 40,000 feet regardless of cabin pressure."},
            "When cabin altitude reaches approximately 14,000 feet.",
            "An altitude pressure switch senses cabin depressurization and automatically initiates passenger mask release when cabin altitude exceeds 14,000 feet.",
            "It corresponds to the upper threshold where humans cannot compensate for lack of oxygen."
        },
        {
            "Why is there always at least one more oxygen mask per seat row than the number of installed passenger seats?",
            {"To accommodate infants or small children held on adult laps.", "To provide a spare mask in case of regulator failure in a single mask.", "To supply additional oxygen to the cabin floor vents."},
            "To accommodate infants or small children held on adult laps.",
            "A 3-seat row will contain 4 masks in the overhead PSU so that lap-held infants/children have access to oxygen without needing their own booked seat.",
            "Think about babies or infants sitting with parents."
        },
        {
            "In a chemical passenger oxygen system, how is the chemical oxygen generator inside the EOC initiated?",
            {"Pulling the mask tightens a lanyard which pulls a release pin, firing a striker into the chemical core.", "An electrical spark ignites the chemical core as soon as the container door opens.", "The generator reacts instantly to cabin ambient air upon door opening."},
            "Pulling the mask tightens a lanyard which pulls a release pin, firing a striker into the chemical core.",
            "Dropping masks hang by lanyards; when a passenger pulls the mask toward their face, the lanyard removes a mechanical pin, releasing a spring-loaded firing pin/striker.",
            "The passenger's pulling action mechanically trips the release pin."
        },
        {
            "What chemical compound is used inside solid-state passenger oxygen generators to produce oxygen?",
            {"Sodium Chlorate.", "Potassium Permanganate.", "Nitroglycerin."},
            "Sodium Chlorate.",
            "Chemical oxygen generators contain a solid block of sodium chlorate (NaClO3), which undergoes thermal decomposition upon ignition to release breathable oxygen.",
            "A common chlorate salt used in oxygen candles."
        },
        {
            "For how long does a standard activated passenger chemical oxygen generator supply oxygen?",
            {"Approximately 12 to 15 minutes.", "Exactly 60 minutes.", "Only 2 to 3 minutes."},
            "Approximately 12 to 15 minutes.",
            "Passenger chemical oxygen generators are sized to supply pure oxygen for 12 to 15 minutes, allowing ample time for emergency descent to 10,000 ft.",
            "Enough time for an emergency descent to a safe altitude."
        },
        {
            "What surface temperature can an active chemical oxygen generator reach during its reaction?",
            {"Around 350 degrees Celsius.", "Around 50 degrees Celsius.", "Over 1200 degrees Celsius."},
            "Around 350 degrees Celsius.",
            "The chemical reaction is exothermic and generates substantial heat, reaching outer canister temperatures around 350°C. A thermal indicator on the canister changes color.",
            "It gets hot enough to trigger a thermal paint indicator (~350°C)."
        },
        {
            "In a gaseous passenger oxygen system (e.g. B747), how are the PSU doors unlatched and opened?",
            {"By an initial high-pressure oxygen pulse ('pressure push') transmitted through the distribution line.", "By individual pyrotechnic squibs at each door latch.", "By electric solenoids installed on every passenger door latch."},
            "By an initial high-pressure oxygen pulse ('pressure push') transmitted through the distribution line.",
            "In gaseous systems, opening the flow control units sends a momentary high-pressure oxygen surge through the cabin ring line, moving pneumatic actuators to unlatch doors.",
            "A pneumatic pressure surge pushes open the door latches."
        },
        {
            "What is the function of the automatic vent valve in a gaseous passenger oxygen distribution line?",
            {"To vent away minor nuisance leakage from flow control units and prevent unintended mask release.", "To replenish fresh atmospheric air into the distribution ring during descent.", "To cool the oxygen lines by constant bleeding during normal cruise."},
            "To vent away minor nuisance leakage from flow control units and prevent unintended mask release.",
            "The vent valve is spring-loaded open under normal conditions to exhaust slight leakage before pressure can build up and pop the PSU door latches.",
            "It bleeds away slow upstream leaks so doors don't drop accidentally."
        },
        {
            "What is the typical rated capacity and maximum pressure of portable walk-around oxygen cylinders?",
            {"11 cubic feet (approx. 310 litres) at 1800 psi.", "50 cubic feet (approx. 1400 litres) at 3000 psi.", "2 cubic feet (approx. 50 litres) at 500 psi."},
            "11 cubic feet (approx. 310 litres) at 1800 psi.",
            "Standard portable flight crew/cabin attendant cylinders have a volume of 11 cu ft (~310 liters at NTPD) and are charged up to 1800 psi.",
            "Roughly 310 litres / 11 cubic feet at 1800 psi."
        },
        {
            "How is the serviceability of a vacuum-packed emergency Smoke Hood (PBE) inspected?",
            {"By verifying that the humidity/serviceability indicator on the storage case has not changed color.", "By breaking the tamper seal and measuring inner bag pressure with a gauge.", "By testing the starter lanyard with a multimeter."},
            "By verifying that the humidity/serviceability indicator on the storage case has not changed color.",
            "Smoke hoods are sealed in protective containers featuring a humidity-sensitive indicator window. If moisture breaches the seal, the indicator changes color, requiring overhaul.",
            "Check the color of the moisture/humidity indicator window."
        },
        {
            "What chemical cartridge is utilized in typical flight crew Breathing Hoods (PBE) for carbon dioxide absorption and oxygen regeneration?",
            {"KO2 (Potassium Superoxide) cartridge.", "Calcium carbonate pellet block.", "Activated charcoal filter only."},
            "KO2 (Potassium Superoxide) cartridge.",
            "Many regenerative breathing hoods employ a Potassium Superoxide (KO2) cartridge, which absorbs exhaled CO2 and moisture while releasing breathable oxygen.",
            "A superoxide chemical that swaps CO2 and moisture for oxygen."
        },
        {
            "What type of mask is connected to a portable oxygen cylinder when administering passenger first aid?",
            {"A continuous flow oxygen mask with a reservoir bag.", "A full-face demand mask with inflatable harness.", "A closed-circuit recirculating scuba mask."},
            "A continuous flow oxygen mask with a reservoir bag.",
            "Portable cylinders provide specific outlet ports: continuous flow masks for first-aid therapy, and demand/full-face smoke masks for firefighting/smoke protection.",
            "First aid uses constant flow with a flexible rebreather bag."
        }
    };
}