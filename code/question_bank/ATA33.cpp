#include <vector>
#include "question.h"

std::vector<Question> getATA33Questions() {
    return {
        // ata 33
        {
            "What is the starting power surge of an incandescent lamp compared to its rated power?",
            {"Approximately 5 times higher.", "Approximately 15 times higher.", "Approximately 30 times higher."},
            "Approximately 15 times higher.",
            "Due to the PTC (Positive Temperature Coefficient) characteristics of pure metals (approx. +0.4 %/K), the cold resistance of the tungsten filament is very low, making the initial starting surge current roughly 15 times higher than the rated power.",
            "Consider the cold resistance of tungsten filaments and how pure metals exhibit PTC characteristics."
        },
        {
            "Why are low rated voltage incandescent lamps (e.g. 5V, 12V, 28V) advantageous on aircraft?",
            {"They require much thinner wires throughout the entire airframe.", "They achieve greater light intensity for the same power consumption due to a thicker filament.", "They do not require any glass bulb encasement."},
            "They achieve greater light intensity for the same power consumption due to a thicker filament.",
            "Low-voltage lamps have a thicker tungsten filament, resulting in higher thermic solidity and higher light intensity for identical levels of electrical power consumption.",
            "Think about filament thickness and thermic solidity at lower operating voltages."
        },
        {
            "What is the chemical purpose of halogen gas (iodine or bromine) inside a halogen incandescent lamp?",
            {"To chemically react with evaporated tungsten and deposit it back onto the hottest part of the filament.", "To eliminate the need for a filament by generating a continuous electrical arc.", "To convert invisible infrared light directly into blue visible light."},
            "To chemically react with evaporated tungsten and deposit it back onto the hottest part of the filament.",
            "Evaporated tungsten combines with halogen gas at temperatures above 250 °C and returns to the hottest part of the filament, preventing soot deposit on the glass and extending service life.",
            "Consider the halogen regenerative cycle that prevents blackening of the inner bulb surface."
        },
        {
            "Why must direct skin contact with the glass bulb of a halogen lamp be strictly avoided during replacement?",
            {"The electrical charge stored on human skin will discharge and destroy the bulb socket.", "Skin oil/grease burns into the bulb at high temperatures, causing reduced intensity and possible fracture.", "The halogen gas will instantly leak out through the quartz envelope upon contact."},
            "Skin oil/grease burns into the bulb at high temperatures, causing reduced intensity and possible fracture.",
            "Skin grease burns into the hot quartz envelope (>250 °C), altering surface tension, reducing optical transmittance, and potentially causing glass fracture.",
            "Think about the effect of finger grease on high-temperature quartz glass."
        },
        {
            "How is visible light produced in a typical aircraft fluorescent gas discharge tube?",
            {"High voltage directly illuminates neon gas with visible yellow-orange photons.", "A tungsten filament glows red hot and radiates through pressurized argon gas.", "Mercury gas generates ultraviolet radiation, which phosphor coating on the inner tube wall converts to visible light."},
            "Mercury gas generates ultraviolet radiation, which phosphor coating on the inner tube wall converts to visible light.",
            "Impact ionization of mercury vapour produces invisible ultraviolet (UV) radiation; the phosphor layer on the inner wall absorbs this UV radiation and re-emits it as visible light.",
            "Remember that the primary discharge produces UV rays that require an internal phosphor layer."
        },
        {
            "Why are conventional bimetal glow starters not used for fluorescent lamps in aircraft construction?",
            {"They are too heavy and bulky to fit in ceiling panels.", "They generate high voltage switching peaks that create electromagnetic interference (EMI).", "They require three-phase 400 Hz power which is unavailable on commercial aircraft."},
            "They generate high voltage switching peaks that create electromagnetic interference (EMI).",
            "Traditional starter units produce inductive voltage peaks when opening the bimetal switch, creating unacceptable electromagnetic interference with aircraft avionics and communication systems.",
            "Focus on electrical noise and avionics interference created during striking."
        },
        {
            "How is light intensity controlled in direct start fluorescent lamps using a magnetic amplifier?",
            {"By mechanically moving an internal shutter across the tube.", "By saturating the iron core of the ballast inductor with a direct current (DC).", "By pulsing high voltage ignition spikes at variable pulse rates."},
            "By saturating the iron core of the ballast inductor with a direct current (DC).",
            "In direct start fluorescent systems, the ballast inductor impedance is adjusted by varying the DC saturation current applied to the iron core, functioning as a magnetic amplifier.",
            "Recall how DC saturation alters the AC impedance of a transformer or inductor."
        },
        {
            "What is the function of the control electrode in an aircraft strobe (flash) tube?",
            {"To provide the continuous working current of 28V DC during normal operation.", "To heat the cathode before main capacitor discharge begins.", "To trigger ionization of the gas with a high voltage pulse (~10 kV)."},
            "To trigger ionization of the gas with a high voltage pulse (~10 kV).",
            "The static anode-to-cathode voltage (approx. 400–500 V) cannot ionize the cold xenon gas until a high voltage trigger pulse (approx. 10 kV) initiates ionization at the control electrode.",
            "Think of the third electrode as a high-voltage spark trigger."
        },
        {
            "What happens if an HID lamp is operated without an appropriate igniter and control unit?",
            {"The lamp will not produce light because gas resistance increases continuously.", "The decreasing internal resistance after ignition will cause the lamp to draw excessive current and burn out.", "The quartz arc tube will immediately shatter due to cold acoustic shock."},
            "The decreasing internal resistance after ignition will cause the lamp to draw excessive current and burn out.",
            "Once an arc is established, ionized gas exhibits negative resistance; without an electronic ballast/control unit to regulate current, the lamp will overload and destroy itself.",
            "Remember the electrical characteristics of an ionized gas discharge after striking."
        },
        {
            "How do Xenon Metal Halide HID lamps eliminate the lengthy warm-up period seen in standard HID lamps?",
            {"By incorporating a secondary high-output LED chip inside the arc chamber.", "By replacing argon with xenon gas, providing instant usable light before metal halides vaporize.", "By preheating the arc tube with a 115V AC external resistance heater."},
            "By replacing argon with xenon gas, providing instant usable light before metal halides vaporize.",
            "Xenon provides usable light immediately upon striking (75% intensity within 5 seconds, 100% within 10 seconds), maintaining safety without waiting for metal halides to fully evaporate.",
            "Look at the gas substitution that bridges the warm-up gap before full metal vaporization."
        },
        {
            "Why must 50-watt xenon metal halide HID lamps be operated with alternating current (AC) rather than direct current (DC)?",
            {"DC power creates dangerous radio frequency harmonics that affect TCAS.", "DC causes molten halide salts to leach into the hot quartz tube, causing strain and tube cracking.", "AC is required to keep the gas in a liquid state during flight."},
            "DC causes molten halide salts to leach into the hot quartz tube, causing strain and tube cracking.",
            "Under direct current, molten halide salts migrate/leach unidirectionally into the hot quartz wall, causing mechanical stress concentrations and subsequent envelope rupture.",
            "Consider unidirectional chemical migration of molten salts under a steady DC electric field."
        },
        {
            "What safety precaution must be taken before removing or servicing an HID lamp after power is switched off?",
            {"Discharge the static wick on the wingtip to ground the ballast.", "Wait at least 3 minutes for cooling and wear safety UV glasses and gloves.", "Ensure the engine anti-ice switch is set to ON during maintenance."},
            "Wait at least 3 minutes for cooling and wear safety UV glasses and gloves.",
            "Operating temperatures reach 800 °C at the outer envelope and 240 °C at the base, with internal pressure reaching 50 bars; cooling time and PPE are vital.",
            "Consider the extreme envelope temperature (800 °C) and high internal pressure (50 bar)."
        },
        {
            "What is the operational purpose of the active layer in a light emitting diode (LED)?",
            {"It serves as a reflective mirror directing photons out through the base.", "It provides an electrical barrier where electron-hole recombination emits single-colour photons.", "It filters out unwanted ultraviolet rays to prevent plastic degradation."},
            "It provides an electrical barrier where electron-hole recombination emits single-colour photons.",
            "The active layer (p-n junction) is where injected electrons and holes recombine under forward bias, releasing energy in the form of electroluminescent photons.",
            "Think of the fundamental semiconductor junction where recombination occurs."
        },
        {
            "How is white light generated in phosphor-coated LED technology?",
            {"A red LED excites a green and blue phosphor coating.", "A blue LED chip is combined with a zinc selenide (ZnSe) yellow converter coating.", "Three distinct lasers are focused through a diffused quartz lens."},
            "A blue LED chip is combined with a zinc selenide (ZnSe) yellow converter coating.",
            "A blue LED chip excites a yellow-emitting scintillator coating (such as zinc selenide), producing a combined spectrum perceived by the human eye as white light.",
            "Think of the mixture of emitted blue light and excited yellow phosphor luminescence."
        },
        {
            "What is the viewing angle of a clear epoxy lens LED compared to a diffused epoxy lens LED?",
            {"Clear has +/-12 degrees (narrow); diffused has +/-35 degrees (wide).", "Clear has +/-90 degrees (wide); diffused has +/-10 degrees (narrow).", "Both types produce an identical beam angle of +/-45 degrees."},
            "Clear has +/-12 degrees (narrow); diffused has +/-35 degrees (wide).",
            "Clear epoxy lenses produce maximum light output with a narrow +/-12 degree beam, whereas diffused lenses scatter light via embedded glass particles out to +/-35 degrees.",
            "Diffused lenses scatter light over a wider angle, while clear lenses concentrate it into a narrow spot."
        },
        {
            "What maintenance policy applies when individual LED bulbs fail within an aircraft LED cluster lamp?",
            {"Individual LED chips must be desoldered and replaced in the field.", "Failed bulbs are ignored permanently since LEDs never affect airworthiness.", "Bulbs are not replaced individually; the complete lamp assembly is replaced when limits are reached."},
            "Bulbs are not replaced individually; the complete lamp assembly is replaced when limits are reached.",
            "LED lamps are sealed units; individual diodes are not replaced on the line. When allowable limits defined in the CMM are exceeded, the entire assembly is replaced.",
            "Consider line replaceable unit (LRU) maintenance philosophy for modern semiconductor lighting."
        },
        {
            "What are the standard angles of coverage for aircraft navigation lights according to CS 25?",
            {"Red/Green 90 degrees left/right; White 180 degrees aft.", "Red 110 degrees left, Green 110 degrees right, White 140 degrees (70 degrees each side aft).", "Red 180 degrees left, Green 180 degrees right, White 360 degrees spherical."},
            "Red 110 degrees left, Green 110 degrees right, White 140 degrees (70 degrees each side aft).",
            "CS 25 mandates red on the left wing tip covering from ahead to 110° left, green on the right covering ahead to 110° right, and white covering 70° either side of the rear centerline.",
            "Recall standard maritime and aviation port (red), starboard (green), and stern (white) sectors."
        },
        {
            "Why is AC power preferred for supplying wingtip navigation lights during flight?",
            {"AC power reduces cable weight by eliminating ground return wires.", "AC avoids creating steady magnetic fields that could interfere with wingtip flux valves.", "DC power is illegal for all external lighting systems above 10,000 feet."},
            "AC avoids creating steady magnetic fields that could interfere with wingtip flux valves.",
            "Direct current produces static magnetic fields that can bias or distort sensitive magnetic compass detectors (flux valves) located in the wingtips.",
            "Think of magnetic compass sensors located in the wing tips and DC magnetic bias."
        },
        {
            "What is the legal flash frequency requirement for an aircraft anti-collision light system (CS 25.1401)?",
            {"Between 10 and 30 cycles per minute.", "Between 40 and 100 cycles per minute (up to 180 in overlapping areas).", "Between 120 and 240 cycles per minute continuously."},
            "Between 40 and 100 cycles per minute (up to 180 in overlapping areas).",
            "CS 25.1401 specifies an effective flashing frequency of 40 to 100 cycles per minute, permitting up to 180 cycles per minute in overlapping visual fields.",
            "Look for the standard aviation flash rate range of approximately 1 Hz."
        },
        {
            "When are anti-collision red beacon lights turned ON during routine aircraft operation?",
            {"Just before engine start, remaining active until the last engine is shut down.", "Only when the aircraft reaches the active runway for takeoff.", "Continuously from the moment the main aircraft battery switch is engaged."},
            "Just before engine start, remaining active until the last engine is shut down.",
            "Red beacon lights alert ground personnel that engines are running or about to start, and they remain on until all engines are shut down.",
            "Think of the visual ground safety warning indicating engine operation."
        },
        {
            "Why do retractable landing lights have a limit switch that prevents illumination while retracted?",
            {"To prevent electromagnetic interference with weather radar transceivers.", "To protect the lamp and surrounding structure from excessive heat build-up inside the bay.", "To prevent draining the battery during emergency electrical configuration."},
            "To protect the lamp and surrounding structure from excessive heat build-up inside the bay.",
            "High-wattage (e.g. 600W) landing lamps generate intense heat; without flight airflow for cooling, illuminating them inside a closed cavity would cause thermal damage.",
            "Consider what happens to a 600W lamp enclosed in a small unventilated wing cavity."
        },
        {
            "What is the orientation angle and function of runway turnoff lights?",
            {"Aimed 90 degrees outward to illuminate wing leading edges for ground de-icing.", "Aimed approximately 30 degrees to each side of centerline to illuminate taxiway intersections.", "Aimed 10 degrees upward to assist control tower visual acquisition."},
            "Aimed approximately 30 degrees to each side of centerline to illuminate taxiway intersections.",
            "Runway turnoff lights illuminate areas roughly 30° left and right of the aircraft centerline to assist the crew during high-speed turnoffs and intersection turns.",
            "Think about where the pilot needs light when making a sharp turn off an active runway."
        },
        {
            "What is the primary function of wing and engine ice inspection lights?",
            {"To warm the wing leading edge to melt accumulated frost before takeoff.", "To project a beam of light onto wing leading edges and engine lips to inspect for ice accretion.", "To warn ground service vehicles of running turbofan intake hazards."},
            "To project a beam of light onto wing leading edges and engine lips to inspect for ice accretion.",
            "Mounted flush on the fuselage side, these lights allow flight crew to visually monitor wing leading edges and engine nacelle intake lips for ice accretion at night.",
            "Recall night-time visual icing detection on aerodynamic surfaces and cowlings."
        },
        {
            "What does the cockpit STORM (or thunderstorm) lighting switch do when activated?",
            {"It flashes all external anti-collision strobes at maximum frequency.", "It immediately shuts down all non-essential cabin lighting via CIDS.", "It overrides individual dimmers to set ambient and instrument panel flood lighting to full brightness."},
            "It overrides individual dimmers to set ambient and instrument panel flood lighting to full brightness.",
            "In the presence of lightning flashes, cockpit storm lighting overrides all dimmed settings to bring cockpit instruments and flood lights to 100% brightness to avoid blinding.",
            "Think about maintaining instrument readability during lightning flashes and dark storms."
        },
        {
            "Why is Pulse Width Modulation (PWM) preferred over series transistor regulators for cockpit light dimming?",
            {"PWM circuits require no ground connection.", "Transistors in PWM operate either fully saturated or fully off, resulting in very low power loss.", "PWM generates continuous pure analogue DC voltages without any filtering."},
            "Transistors in PWM operate either fully saturated or fully off, resulting in very low power loss.",
            "Because switching transistors in PWM are either completely on (zero voltage drop) or completely off (zero current flow), power dissipation as heat is minimal.",
            "Consider energy dissipation and heat reduction in switching vs. linear regulator modes."
        },
        {
            "How does an automatic cockpit illumination control circuit adjust panel brightness based on ambient light?",
            {"A thermistor detects cockpit temperature rise and increases supply voltage.", "A photoresistor changes resistance with ambient light, altering the PWM control voltage to the lamps.", "A barometric sensor monitors altitude to dim lights automatically above 10,000 feet."},
            "A photoresistor changes resistance with ambient light, altering the PWM control voltage to the lamps.",
            "Photoresistors vary their resistance based on ambient cockpit lux levels, shifting the reference threshold in the PWM controller to raise or lower brightness.",
            "Think of light-dependent resistors (LDR / photoresistors) measuring ambient cockpit brightness."
        },
        {
            "On older transport aircraft, how is a push-to-test (PTT) warning lamp mechanically verified?",
            {"By turning the outer bezel 90 degrees counter-clockwise.", "By pressing directly on the lamp lens cap to close an electrical test contact.", "By inserting a test probe into the front drain hole."},
            "By pressing directly on the lamp lens cap to close an electrical test contact.",
            "Push-to-test annunciators allow maintenance personnel or crew to press the spring-loaded lens, connecting 28V DC directly to the bulb filament to verify bulb integrity.",
            "Consider the direct mechanical press action on individual annunciator lens caps."
        },
        {
            "On the Airbus A380, how is the general passenger cabin lighting system controlled and managed?",
            {"Solely through individual manual potentiometers mounted beside each cabin seat.", "Fully controlled and monitored via the Cabin Intercommunication Data System (CIDS) through FAPs.", "Directly hardwired to the engine-driven generator bus bars without electronic controllers."},
            "Fully controlled and monitored via the Cabin Intercommunication Data System (CIDS) through FAPs.",
            "Cabin lighting on the A380 is fully digital, managed via CIDS and commanded through Flight Attendant Panels (FAPs) using programmed lighting scenarios and data buses.",
            "Think of the central cabin management computer network used on modern Airbus aircraft."
        },
        {
            "What technological advantage does the HelioJet cabin lighting system offer over conventional LED strips?",
            {"It uses high-voltage xenon gas inside flexible glass conduits.", "It uses optical glass converters requiring only 20% of the LEDs to produce homogeneous, colour-stable light.", "It eliminates all electrical connections by relying entirely on cabin solar panels."},
            "It uses optical glass converters requiring only 20% of the LEDs to produce homogeneous, colour-stable light.",
            "HelioJet uses innovative optical glass rods to blend light from 80% fewer LEDs, eliminating LED dotting effects, colour shifts, and high failure rates.",
            "Recall the optical glass converter rod concept developed by LHT and SCHOTT."
        },
        {
            "What is the minimum operating duration required for aircraft emergency lighting powered by EPSU battery packs?",
            {"At least 3 minutes.", "At least 10 minutes.", "At least 45 minutes."},
            "At least 10 minutes.",
            "Certification rules mandate that dedicated emergency power supply unit (EPSU) batteries must sustain emergency egress lighting for a minimum of 10 minutes.",
            "Think of the standard emergency evacuation power endurance requirement."
        },
        {
            "In the GUIDELINE non-electric floor path marking system, what is the operating principle of the photoluminescent strips?",
            {"Tritium gas tubes emit constant radioactive beta luminescence.", "Chemical glow sticks are punctured mechanically upon emergency slide deployment.", "Photoluminescent material absorbs ambient light and gradually emits it in darkness for up to 22 hours."},
            "Photoluminescent material absorbs ambient light and gradually emits it in darkness for up to 22 hours.",
            "GUIDELINE photoluminescent strips store energy from normal cabin lighting (recharged in ~10 minutes) and emit cold yellowish glow for up to 22 hours without wires or batteries.",
            "Think about non-electrical photo-reactive glow materials charged by cabin lighting."
        },
        {
            "What photometric unit measures the luminous flux incident on a surface per unit area (power density)?",
            {"Lumen (lm).", "Lux (lx).", "Candela (cd)."},
            "Lux (lx).",
            "Illuminance (intensity of illumination) is measured in Lux (1 Lux = 1 Lumen/m²), representing radiant power density incident on a surface.",
            "Remember that 1 lux is defined as 1 lumen per square metre."
        },
        {
            "What photometric unit represents the total undirected radiant light power perceived by the human eye?",
            {"Candela (cd).", "Lumen (lm).", "Luminance (cd/m²)."},
            "Lumen (lm).",
            "Luminous flux is the total undirected radiant power of a light source perceived by the human eye and is expressed in Lumens.",
            "Look for the unit used to quantify the total light output rating of bulbs."
        },
        {
            "What is luminance (candela per square metre - cdm) and why is it unique among photometric units?",
            {"It is the total electrical power consumed by a gas discharge tube.", "It measures brightness of a surface and is the only photometric unit directly visible to the human eye.", "It indicates the high-voltage ionization threshold of xenon flash tubes."},
            "It measures brightness of a surface and is the only photometric unit directly visible to the human eye.",
            "Luminance (cd/m²) measures the perceived brightness of an illuminated or radiating surface; it is the only photometric measuring quantity directly visible to human perception.",
            "Consider which photometric parameter directly represents visible surface brightness."
        },
        {
            "What happens when the STROBE switch is set to AUTO on the Airbus A380?",
            {"Strobes flash only during lightning storm conditions.", "Strobes operate automatically when airborne, but remain off when the nose landing gear is in the ground position.", "Strobes flash in sync with the red beacon lights during engine startup."},
            "Strobes operate automatically when airborne, but remain off when the nose landing gear is in the ground position.",
            "In AUTO mode, the NLG squat/proximity sensors keep wing and tail strobes off on the ground to prevent blinding ramp personnel, activating them automatically upon liftoff.",
            "Think about ground-to-air logic tied to the nose landing gear weight-on-wheels sensor."
        },
        {
            "What type of light source is utilized for the logo lights on the trimmable horizontal stabilizer (THS) of the A380?",
            {"High Intensity Discharge (HID) lamps.", "Incandescent 28V filament bulbs.", "Mercury arc cold-cathode tubes."},
            "High Intensity Discharge (HID) lamps.",
            "On the A380, two HID lamp units are mounted on each side of the THS to illuminate the airline logo on the vertical fin.",
            "Recall the high-efficiency discharge lighting used on the horizontal tailplane of the A380."
        },
        {
            "What is the function of the pilot eye reference device installed on the cockpit windshield center frame?",
            {"To measure ambient sun glare and adjust HUD brightness automatically.", "To provide a visual alignment aid using two red balls and one LED-lit white ball for optimal seating position.", "To detect pilot eye blinks and trigger alertness warning chimes."},
            "To provide a visual alignment aid using two red balls and one LED-lit white ball for optimal seating position.",
            "The device uses three balls (two red, one internally illuminated white) to enable pilots to adjust their seat height/position for the correct eye reference point.",
            "Think of the geometric sightline alignment balls used to adjust the pilot seat position."
        },
        {
            "What happens to the A300-600 entrance area lighting when Engine No. 1 is running and the cockpit door is opened?",
            {"All cabin lighting instantly switches to emergency battery power.", "Left entrance lights decrease to 10% and right to 50%, while the lavatory A spotlight turns off.", "All ceiling fluorescent tubes immediately illuminate at 100% brightness."},
            "Left entrance lights decrease to 10% and right to 50%, while the lavatory A spotlight turns off.",
            "This security and glare-reduction feature automatically dims entrance lights (10% left, 50% right) and extinguishes the lavatory spotlight to prevent flight deck reflections.",
            "Consider flight deck night vision protection when the cockpit door opens with an engine running."
        },
        {
            "How are emergency exit signs illuminated in the forward and aft staircase areas of the Airbus A380?",
            {"They use high-voltage neon discharge tubes.", "They use photoluminescent panels.", "They are illuminated by incandescent sealed beams."},
            "They use photoluminescent panels.",
            "While most A380 emergency lighting is based on LED technology, the exit signs located in the staircase areas are photoluminescent.",
            "Recall the exception to the all-LED emergency lighting rule on the A380."
        },
        {
            "What hazard requires the wearing of protective gloves when handling broken HID arc tubes?",
            {"Exposure to radioactive krypton-85 isotopes.", "Absorption of toxic mercury through the skin leading to neurological damage.", "Chemical burns from concentrated sulfuric acid electrolyte."},
            "Absorption of toxic mercury through the skin leading to neurological damage.",
            "The inner quartz arc tube contains elemental mercury (approx. 0.6 µg) which can penetrate skin and cause neurological disorders; PPE is mandatory.",
            "Focus on the toxic heavy metal sealed inside gas discharge arc tubes."
        }
    };

}