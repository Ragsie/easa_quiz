#include <vector>
#include "question.h"

std::vector<Question> getATA06Questions() {
    return {
{
    "Which measurement units are standardly used for reference planes by Boeing and Airbus?",
    {"Boeing uses inches, whereas Airbus uses millimeters and centimeters.", "Boeing uses millimeters, whereas Airbus uses inches.", "Both manufacturers exclusively use standard metric meters."},
    "Boeing uses inches, whereas Airbus uses millimeters and centimeters.",
    "Different manufacturers use different systems: Boeing defines reference planes in inches, while Airbus uses centimeters and millimeters.",
    "Consider the American imperial system vs. European metric system."
},
    {
        "What is the primary function of aircraft reference planes, stations, and zonal systems?",
        {"To calculate dimensions, locate components quickly, and calculate weight and balance.", "To provide aerodynamic lift along structural streamlines.", "To seal structural joints against cabin air pressurization loss."},
        "To calculate dimensions, locate components quickly, and calculate weight and balance.",
        "Reference planes and zones allow quick component identification and are essential for calculating the center of gravity and weight distribution.",
        "Think of 3D spatial referencing and weight & balance calculations."
    },
    {
        "How is a Body Station (B STA) defined on a Boeing aircraft?",
        {"A vertical plane at a right angle to the body centerline, measured from a point in front of the nose.", "A horizontal plane parallel to the passenger cabin floor beams.", "A longitudinal vertical plane defining left/right wing symmetry."},
        "A vertical plane at a right angle to the body centerline, measured from a point in front of the nose.",
        "A body station is a transverse vertical plane perpendicular to the body centerline, measured from a reference point located ahead of the aircraft nose.",
        "It is a transverse vertical slice along the longitudinal fuselage axis."
    },
    {
        "What constitutes Body Buttock Line 0 (BBL 0) on Boeing aircraft?",
        {"The vertical plane along the aircraft body centerline.", "The lowest waterline passing through the bottom keel skin.", "The horizontal plane corresponding to the main passenger floor."},
        "The vertical plane along the aircraft body centerline.",
        "Body buttock lines are vertical planes parallel to the aircraft centerline plane. BBL 0 is the aircraft centerline itself.",
        "It is the central longitudinal vertical symmetry plane."
    },
    {
        "Where is Body Waterline 0 (BWL 0) positioned on a Boeing 747?",
        {"91 inches below the fuselage.", "Directly along the bottom skin of the center fuselage.", "At the cabin floor beam waterline."},
        "91 inches below the fuselage.",
        "Body waterlines are horizontal reference planes measured from an imaginary plane below the fuselage; on the Boeing 747, BWL 0 is 91 inches below the fuselage.",
        "It is an imaginary reference plane located beneath the aircraft belly."
    },
    {
        "What fixed reference plane is used for installing cabin and cockpit components?",
        {"A fixed waterline along the top surface of the floor beams.", "A buttock line along the central aisle carpet tracks.", "A station plane located at the forward cockpit door frame."},
        "A fixed waterline along the top surface of the floor beams.",
        "To define installation locations in the cabin and cockpit, manufacturers utilize a fixed waterline along the top surface of the floor beams.",
        "It is the structural floor beam datum upon which monuments and seats sit."
    },
    {
        "At what angle is the Wing Reference Plane (WRP) inclined on a Boeing 747, and where does it begin?",
        {"Inclined at 7 degrees to the horizontal plane, starting at body buttock line 127.5.", "Inclined at 3 degrees to the waterline, starting at BBL 0.", "Inclined at 12 degrees to the floor plane, starting at wing station 0."},
        "Inclined at 7 degrees to the horizontal plane, starting at body buttock line 127.5.",
        "On Boeing aircraft, the wing reference plane is inclined to match wing dihedral. On the B747, it is inclined at 7 degrees to the horizontal and starts at BBL 127.5.",
        "Look at the wing dihedral angle specification and its starting buttock line."
    },
    {
        "How is a Wing Buttock Line (WBL) defined on Boeing aircraft?",
        {"A vertical plane at a right angle to the wing reference plane, measured in inches from WRP and BBL 0 intersection.", "A horizontal plane parallel to the cabin floor beams.", "A plane running parallel to the leading edge slat tracks."},
        "A vertical plane at a right angle to the wing reference plane, measured in inches from WRP and BBL 0 intersection.",
        "The wing buttock line is a vertical plane perpendicular to the wing reference plane, measured in inches from the intersection of WRP and BBL 0.",
        "It is a plane perpendicular to the inclined wing reference plane."
    },
    {
        "How is a Wing Station (WS) defined on Boeing aircraft?",
        {"A vertical plane at a right angle to the wing reference plane and to the rear spar.", "A plane parallel to the aircraft fuselage longitudinal axis.", "A horizontal plane passing through the wing chord line."},
        "A vertical plane at a right angle to the wing reference plane and to the rear spar.",
        "A wing station is a vertical plane perpendicular to both the wing reference plane and the rear spar, measured from the intersection of the extended leading edge and WBL 0.",
        "Note the right angle orientation relative to the structural rear spar."
    },
    {
        "Where is Nacelle Station 0 (NAC STA 0) located on a Boeing 747?",
        {"197.5 inches in front of the forward engine mount.", "Directly at the engine fan cowl intake rim.", "At the center wing front spar attachment pylon."},
        "197.5 inches in front of the forward engine mount.",
        "Nacelle station zero is located ahead of the forward engine mount; on the Boeing 747, it is located 197.5 inches in front of the forward engine mount.",
        "It is measured forward of the engine mount fitting."
    },
    {
        "How are nacelle buttock lines defined on a Boeing 747?",
        {"Inboard engine NAC BL 0 is 2 degrees from WBL 470; outboard is 2 degrees from WBL 834.", "Inboard NAC BL 0 is parallel to BBL 0; outboard is parallel to WBL 500.", "They are aligned directly with the wing rib stations at 90 degrees."},
        "Inboard engine NAC BL 0 is 2 degrees from WBL 470; outboard is 2 degrees from WBL 834.",
        "Nacelle buttock lines are defined relative to wing buttock lines: on the B747, inboard engine NAC BL 0 is 2 degrees from WBL 470, and outboard is 2 degrees from WBL 834.",
        "Notice the 2-degree toe-in/alignment angle relative to the wing buttock line."
    },
    {
        "What are the nacelle waterlines on Boeing aircraft?",
        {"Horizontal reference planes parallel to the wing reference plane, with waterline zero below the nacelle.", "Planes parallel to the fuselage floor beams with zero at engine center.", "Vertical planes aligned with the engine turbine exhaust cone."},
        "Horizontal reference planes parallel to the wing reference plane, with waterline zero below the nacelle.",
        "Nacelle waterlines are planes parallel to the wing reference plane, with nacelle waterline zero located below the bottom of the nacelle structure.",
        "They stay parallel to the wing reference plane rather than the fuselage waterline."
    },
    {
        "How is the horizontal stabilizer chord plane (reference plane) defined?",
        {"A plane passing through the leading and trailing edges of the stabilizer airfoil.", "A plane perpendicular to the elevator hinge line.", "A waterline aligned with the aircraft main deck passenger floor."},
        "A plane passing through the leading and trailing edges of the stabilizer airfoil.",
        "The stabilizer chord plane (also called the horizontal stabilizer reference plane) is defined as a plane passing through both the leading and trailing edges of the airfoil.",
        "Aerodynamic chord links the leading edge directly to the trailing edge."
    },
    {
        "How is a horizontal stabilizer station defined on Boeing aircraft?",
        {"A plane at a right angle to the stabilizer chord plane and to the rear spar.", "A vertical plane parallel to the vertical fin rudder axis.", "A horizontal plane parallel to the fuselage waterline zero."},
        "A plane at a right angle to the stabilizer chord plane and to the rear spar.",
        "A horizontal stabilizer station is perpendicular to the stabilizer chord plane and to the horizontal stabilizer rear spar, starting at extended leading edge and STAB BL 0.",
        "It is perpendicular to both the chord plane and the rear spar."
    },
    {
        "Where is elevator station zero located on a Boeing horizontal stabilizer?",
        {"At the intersection of the elevator hinge centerline and stabilizer buttock line zero.", "At the outboard elevator tip horn balance.", "At the elevator actuator control tab drive link."},
        "At the intersection of the elevator hinge centerline and stabilizer buttock line zero.",
        "Elevator stations are perpendicular to the elevator hinge centerline, measured from the intersection of the elevator hinge centerline and STAB BL 0.",
        "Look at the intersection between hinge centerline and center buttock line."
    },
    {
        "Where is Fin Station 0 located on the vertical stabilizer of a Boeing 747?",
        {"At the intersection of the extended leading edge and body waterline 366.57.", "At the top tip of the vertical fin leading edge.", "At the rear spar attachment bolt on the aft pressure bulkhead."},
        "At the intersection of the extended leading edge and body waterline 366.57.",
        "On the Boeing 747, fin station 0 is located at the intersection of the extended vertical stabilizer leading edge and body waterline 366.57.",
        "Check the specific body waterline intersection for the fin leading edge."
    },
    {
        "What defines the vertical stabilizer fin waterline on Boeing aircraft?",
        {"A horizontal plane parallel to the body waterline.", "A plane inclined at 45 degrees to the rudder hinge centerline.", "A plane perpendicular to the fin leading edge stringers."},
        "A horizontal plane parallel to the body waterline.",
        "The fin waterline is a horizontal plane running parallel to the fuselage body waterline system.",
        "It remains parallel to the primary fuselage horizontal reference planes."
    },
    {
        "Where is Rudder Station 0 located on a Boeing 747?",
        {"At the intersection of the rudder hinge centerline and body waterline 366.57.", "At the rudder trim tab actuator center bolt.", "At the intersection of the rudder trailing edge and fuselage crown."},
        "At the intersection of the rudder hinge centerline and body waterline 366.57.",
        "On the Boeing 747, rudder station 0 is situated at the intersection of the rudder hinge centerline and body waterline 366.57.",
        "The rudder hinge line intersects BWL 366.57 at zero station."
    },
    {
        "How does the Airbus identification system designate fuselage 3D spatial coordinates?",
        {"X values along the longitudinal axis, Y along lateral axis, and Z along vertical axis.", "STA for longitudinal, BL for vertical, and WL for transverse axes.", "Distances measured in inches from the cockpit bulkhead."},
        "X values along the longitudinal axis, Y values along lateral axis, and Z values along vertical axis.",
        "Airbus utilizes Cartesian axes: X represents the longitudinal axis, Y represents the lateral/transverse axis, and Z represents the vertical axis.",
        "Standard Cartesian 3D coordinates (X, Y, Z)."
    },
    {
        "In the Airbus coordinate system, what sign conventions apply to lateral (Y) values?",
        {"Right side of centerline is negative (-Y), left side is positive (+Y).", "Right side is positive (+Y), left side is negative (-Y).", "Both sides are strictly positive values."},
        "Right side of centerline is negative (-Y), left side is positive (+Y).",
        "In the Airbus coordinate system, the right-hand side of the aircraft centerline is defined by negative Y values, and the left-hand side by positive Y values.",
        "Left is positive and right is negative."
    },
    {
        "Where is Station Zero (X=0) located on an Airbus A320?",
        {"2540 millimeters in front of the aircraft nose.", "Directly at the radome nose apex.", "At the forward cargo compartment bulkhead."},
        "2540 millimeters in front of the aircraft nose.",
        "On the Airbus A320, station zero (datum X=0) is a fixed imaginary plane located 2540 mm ahead of the aircraft nose.",
        "An imaginary datum plane located 2.54 meters in front of the nose."
    },
    {
        "Where is the fuselage datum (Z=0) located on an Airbus A320?",
        {"240 millimeters above the floor beams.", "At the bottom centerline keel skin.", "Along the upper window belt line."},
        "240 millimeters above the floor beams.",
        "The Airbus A320 vertical fuselage datum (Z=0) is established exactly 240 millimeters above the cabin floor beams.",
        "It is a fixed height located 24 cm above the floor beams."
    },
    {
        "How are wing stations measured on an Airbus A320?",
        {"In millimeters from Rib 1 at a right angle to Rib 1 to the front spar.", "In inches along the leading edge sweep angle.", "In centimeters from the fuselage centerline along the rear spar."},
        "In millimeters from Rib 1 at a right angle to Rib 1 to the front spar.",
        "On the Airbus A320, wing stations are measured in millimeters perpendicular (at a right angle) to Rib 1 to where they meet the front spar.",
        "Measurement starts from Rib 1 at right angles, rather than following the spar sweep."
    },
    {
        "What major zone is assigned to the lower half of the fuselage under ATA 100/iSpec 2200?",
        {"Major Zone 100", "Major Zone 200", "Major Zone 300"},
        "Major Zone 100",
        "Major Zone 100 is allocated to the lower half of the fuselage (belly, cargo holds, lower nose/aft areas).",
        "The 100 series represents the lower fuselage half."
    },
    {
        "Which aircraft structural section is designated as Major Zone 300?",
        {"Empennage (aft fuselage, horizontal and vertical stabilizers).", "Power plants and engine pylons/struts.", "Landing gears and landing gear wheel well doors."},
        "Empennage (aft fuselage, horizontal and vertical stabilizers).",
        "Major Zone 300 designates the aircraft empennage, comprising the tailcone, aft fuselage, vertical fin, and horizontal tailplane.",
        "Tail section and control surfaces belong to the 300 series."
    },
    {
        "What do Major Zones 500 and 600 represent in standard aircraft zonal identification?",
        {"Zone 500 is Left Wing; Zone 600 is Right Wing.", "Zone 500 is Upper Fuselage; Zone 600 is Lower Fuselage.", "Zone 500 is Engines; Zone 600 is Landing Gear."},
        "Zone 500 is Left Wing; Zone 600 is Right Wing.",
        "In the ATA zonal breakdown, Zone 500 corresponds to the complete left wing and Zone 600 corresponds to the complete right wing.",
        "Odd numbers represent the left side and even numbers represent the right side."
    },
    {
        "Which components are covered under Major Zones 700 and 800?",
        {"700 is Landing Gear and doors; 800 is Doors (passenger/cargo/emergency).", "700 is Cockpit avionics; 800 is Passenger cabin seats.", "700 is Fuel system; 800 is Pneumatic ducts."},
        "700 is Landing Gear and doors; 800 is Doors (passenger/cargo/emergency).",
        "Major Zone 700 covers landing gear assemblies and landing gear doors; Major Zone 800 is allocated to aircraft doors and emergency exits.",
        "Undercarriage is 700; access and entrance doors are 800."
    },
    {
        "How are sub-major zones identified in the ATA numbering system?",
        {"By the second digit of the three-digit number code.", "By the first alphabetic letter suffix.", "By the third digit denoting individual access panels."},
        "By the second digit of the three-digit number code.",
        "Sub-major zones are designated by the second digit (1 to 6 for smaller aircraft, 1 to 9 for larger aircraft).",
        "The middle digit of the 3-digit code signifies the sub-major zone."
    },
    {
        "In access panel identification (e.g., 142AL), what does the second suffix letter indicate?",
        {"Whether the panel or door is on the left (L) or right (R) side.", "The sequential production batch of the panel.", "The specific fastener type used to secure the panel."},
        "Whether the panel or door is on the left (L) or right (R) side.",
        "In panel identification codes, the first letter shows position (FWD/AFT, INBD/OUTBD, BTM/TOP) and the second letter indicates aircraft side (Left or Right).",
        "The final letter denotes Left (L) or Right (R)."
    },
    {
        "Why are antennas and certain external equipment intentionally not electrically bonded to the main structure?",
        {"So that a lightning flash damages only the struck element without endangering the main structure.", "To prevent electro-magnetic interference with cockpit audio systems.", "To reduce aircraft parasitic aerodynamic drag."},
        "So that a lightning flash damages only the struck element without endangering the main structure.",
        "External antennas are left unbonded so that a direct lightning attachment damages only the antenna unit rather than conducting high surge currents directly into structural frames.",
        "Sacrificial isolation prevents surge current propagation into the airframe."
    },
    {
        "Why must a fiberglass barrier be sandwiched between aluminum bonding screens and carbon/graphite composites?",
        {"To prevent galvanic corrosion between aluminum and carbon fiber.", "To increase mechanical peel strength of the composite skin.", "To provide thermal curing insulation during manufacturing."},
        "To prevent galvanic corrosion between aluminum and carbon fiber.",
        "Carbon composite is electrically conductive and has a high galvanic potential with aluminum. A fiberglass layer acts as an insulator preventing galvanic corrosion.",
        "Carbon and aluminum in direct contact create severe galvanic corrosion."
    },
    {
        "What happens to composite materials without lightning protection when lightning current exits through them?",
        {"The resins evaporate, leaving bare structural fibers.", "The fibers melt into a solid glass bead.", "The composite becomes permanently magnetized."},
        "The resins evaporate, leaving bare structural fibers.",
        "Without a conductive discharge layer, the extreme heat of the lightning current vaporizes the epoxy matrix resin, leaving bare unsupported structural fibers behind.",
        "Extreme resistive heating burns and evaporates the polymer resin matrix."
    },
    {
        "What defines Lightning Strike Zone 2 on an aircraft?",
        {"Surfaces where there is a high probability of a swept-back lightning channel.", "Surfaces subject only to direct initial entry attachment.", "Internal cabin areas completely shielded from electromagnetic transients."},
        "Surfaces where there is a high probability of a swept-back lightning channel.",
        "Zone 2 surfaces are subject to swept strokes where an initial strike at Zone 1 (e.g. radome) sweeps backward along the fuselage due to aircraft forward motion.",
        "Forward aircraft motion drags or sweeps the ionized lightning channel along Zone 2."
    },
    {
        "What distinguishes a pure monocoque fuselage structure from a semi-monocoque structure?",
        {"In monocoque, the skin carries primary loads without stringers; in semi-monocoque, skin shares loads with stringers, frames, and clips.", "In monocoque, composite panels replace titanium frames.", "In monocoque, all loads are carried exclusively by a central keel beam."},
        "In monocoque, the skin carries primary loads without stringers; in semi-monocoque, skin shares loads with stringers, frames, and clips.",
        "Monocoque relies on skin and bulkheads/frames alone. Semi-monocoque distributes loads among skin, longitudinal stringers, clips, and transverse frames.",
        "Mono means single shell taking the stresses; semi adds internal stringers and clips."
    },
    {
        "What is the primary role of fuselage frames in aircraft construction?",
        {"To maintain fuselage shape and reduce stringer column length to prevent buckling.", "To provide thermal heating conduits for the cabin floor.", "To house individual wiring harnesses and fuel transfer lines."},
        "To maintain fuselage shape and reduce stringer column length to prevent buckling.",
        "Transverse frames maintain aerodynamic cross-section and provide intermediate support that shortens stringer unsupported length, preventing compression buckling.",
        "Frames support stringers against column buckling under bending stress."
    },
    {
        "What is the standard spacing between fuselage frames in commercial transport aircraft?",
        {"20 inches", "36 inches", "8 inches"},
        "20 inches",
        "Fuselage mainframe transverse ring frames are standardly spaced 20 inches apart along the length of the fuselage shell.",
        "Standard frame pitch is 20 inches (~50.8 cm)."
    },
    {
        "What is the primary purpose of structural clips in semi-monocoque fuselage construction?",
        {"To transfer cabin pressure loads from skin to frame and assist in carrying compression stress.", "To provide decorative attachment for cabin sidewall interior panels.", "To ground electrical static charges directly to passenger seat tracks."},
        "To transfer cabin pressure loads from skin to frame and assist in carrying compression stress.",
        "Clips connect the fuselage skin and stringers to the transverse frames, transferring outward pressure loads and helping the frame absorb compression stresses.",
        "Clips link outer skin and stringers to inner transverse frames."
    },
    {
        "What structural role do floor-to-skin shear ties perform?",
        {"They connect floor beams, frames, and skin stringers to provide an additional load path for cabin pressure.", "They prevent moisture from leaking between cargo holds and passenger cabin.", "They allow the passenger floor to expand longitudinally during temperature changes."},
        "They connect floor beams, frames, and skin stringers to provide an additional load path for cabin pressure.",
        "Floor-to-skin shear ties link the floor beams to the fuselage shell and frames, establishing a continuous structural path for cabin pressurization forces.",
        "They tie floor beams directly to frames and skin stringers."
    },
    {
        "What is the main structural function of the aircraft keel beam?",
        {"To carry bending and shear loads across the large unpressurized wheel well cutout.", "To distribute engine thrust loads directly to the horizontal stabilizer.", "To serve as a structural barrier preventing nose gear collapse."},
        "To carry bending and shear loads across the large unpressurized wheel well cutout.",
        "The keel beam runs through the center wing section underneath the cabin, absorbing massive fuselage bending moments across the open, unskinned wheel well bay.",
        "It acts as a heavy spine bridging the cutout where skin/stringers cannot run."
    },
    {
        "How is the cabin pressure boundary formed across the fuselage center wing section?",
        {"By the upper skin of the center wing box, a pressure diaphragm above the landing gear, and forward/aft pressure bulkheads.", "By hermetically sealing the entire lower main landing gear bay doors.", "By maintaining ambient external atmospheric pressure throughout the cabin floor."},
        "By the upper skin of the center wing box, a pressure diaphragm above the landing gear, and forward/aft pressure bulkheads.",
        "Because the landing gear bay is unpressurized, the pressure boundary is established by the center wing box upper skin, pressure diaphragms, and bulkheads.",
        "The upper surface of the center wing box and surrounding diaphragms seal the floor above the wheel well."
    },
    {
        "What structural components form the tail section of the aircraft?",
        {"Frames, stringers, and skin panels riveted together to carry empennage loads.", "A solid composite single-piece shell without any internal bulkheads.", "A titanium tubular spaceframe covered with fabric fairings."},
        "Frames, stringers, and skin panels riveted together to carry empennage loads.",
        "The aircraft tail section is built from transverse frames, longitudinal stringers, and skin panels riveted together to distribute loads from the horizontal and vertical stabilizers.",
        "Standard semi-monocoque construction carrying aerodynamic empennage loads."
    },
    {
        "What is the primary problem associated with pure monocoque fuselage construction?",
        {"Maintaining adequate skin strength while keeping the structural weight within permitted limits.", "High sensitivity to fuel vapor ignition inside fuselage bays.", "Excessive flexibility of the fuselage during crosswind landings."},
        "Maintaining adequate skin strength while keeping the structural weight within permitted limits.",
        "In monocoque construction, because the skin must carry all stresses without stringer stiffeners, the skin must be thick, resulting in significant weight penalties.",
        "Skin thickness needed for strength adds prohibitive weight."
    },
    {
        "How is the continuity of electrical bonding restored across insulating parts in aircraft metallic structures?",
        {"By installing bonding strips, screws/rivets, and grounding lugs between metallic assemblies.", "By spraying insulating rubberized sealant over structural joints.", "By applying non-conductive epoxy primers between structural laps."},
        "By installing bonding strips, screws/rivets, and grounding lugs between metallic assemblies.",
        "Where insulating intermediate materials interrupt electrical continuity, bonding strips, grounding lugs, and jumper screws/rivets shunt across the joint.",
        "Flexible metallic jumpers, lugs, and bonding screws restore current paths."
    },
    {
        "What method can be used to dissipate electrical static charges on composite structures?",
        {"Weaving fine aluminum wires into the top layer of composite fabric (e.g. fiberglass or Kevlar).", "Adding heavy lead weights inside the wingtip structures.", "Coating composite plies with oil-based varnishes."},
        "Weaving fine aluminum wires into the top layer of composite fabric (e.g. fiberglass or Kevlar).",
        "Aluminum wires woven into the outer composite ply, metal mesh screens, flame-sprayed aluminum, or bonded metal foils provide conductive discharge paths.",
        "Woven metal wire mesh provides surface conductivity."
    },
    {
        "What is flame spraying in the context of aircraft composite lightning protection?",
        {"Spraying molten aluminum onto the composite surface similar to paint.", "Applying open blowtorches to harden composite resin surfaces.", "Spraying high-temperature chemical retardants into engine pylons."},
        "Spraying molten aluminum onto the composite surface similar to paint.",
        "Flame spraying involves atomizing and spraying molten aluminum onto the outer composite ply to create a lightweight conductive shielding layer.",
        "Molten conductive metal is atomized and applied like a coat of paint."
    },
    {
        "What is the characteristic of Lightning Strike Zone 3?",
        {"Surfaces with low probability of direct lightning entry, but carrying high conducted currents between attachment points.", "Surfaces subject only to direct continuous lightning attachment without current conduction.", "Cockpit window panes that are completely insulated from current flow."},
        "Surfaces with low probability of direct lightning entry, but carrying high conducted currents between attachment points.",
        "Zone 3 surfaces rarely experience direct initial strike attachment, but conduct heavy lightning current traversing between two attachment points (Zones 1 and 2).",
        "Conducted currents pass directly through the main body between entry and exit points."
    },
    {
        "What can high-intensity acoustic shock waves from lightning strikes cause on thin skins?",
        {"Deformation of thin metal skins or rupture of thin composite skins.", "Immediate complete failure of the central wing box keel beam.", "Spontaneous combustion of the engine nacelle titanium cowls."},
        "Deformation of thin metal skins or rupture of thin composite skins.",
        "The acoustic shock wave accompanying lightning attachment can cause localized plastic deformation of thin metallic skins or puncture/rupture of thin composite skins.",
        "The shock wave can dent metal or rupture thin composite panels."
    },
    {
        "How does electrical current discharge from an all-aluminum aircraft skin during flight?",
        {"It flows through the metallic skin and discharges to the atmosphere via static dischargers (wicks).", "It is absorbed and stored indefinitely within the aircraft battery cells.", "It radiates exclusively into the cockpit windshield heating elements."},
        "It flows through the metallic skin and discharges to the atmosphere via static dischargers (wicks).",
        "The aluminum skin provides a low-resistance path that channels accumulated static and strike currents aft to static discharger wicks located on trailing edges.",
        "Current leaves the airframe smoothly via trailing-edge static wicks."
    },
    {
        "Why are stringers connected to each other by stringer splices across aircraft production breaks?",
        {"To ensure structural load continuity along the longitudinal fuselage bending axis.", "To allow quick electrical disconnection during routine hangar towing.", "To absorb thermal expansion noises in the passenger cabin."},
        "To ensure structural load continuity along the longitudinal fuselage bending axis.",
        "Stringer splices join stringer segments across fuselage manufacturing joints, ensuring seamless load transfer for fuselage bending, tension, and compression.",
        "Splices maintain continuous structural strength across major factory joints."
    },
    {
        "What structural members support passenger cabin floor panels and seat tracks directly?",
        {"Transverse floor beams attached to the fuselage frames.", "Longitudinal keel beams extending under the window line.", "Vertical fin waterlines inside the cabin sidewalls."},
        "Transverse floor beams attached to the fuselage frames.",
        "Floor beams span horizontally across the fuselage between ring frames, supporting passenger seats, floor panels, and distributing cabin pressurization forces.",
        "Horizontal floor beams carry passenger and payload weight across frames."
    },
    {
        "What happens if aircraft electrical wiring is exposed to high electromagnetic fields from lightning without adequate shielding?",
        {"Transient voltages and currents can cause temporary disruption or permanent damage to avionics systems.", "The electrical wire copper cores immediately transform into aluminum conductors.", "Cabin air conditioning packs immediately reverse air direction."},
        "Transient voltages and currents can cause temporary disruption or permanent damage to avionics systems.",
        "Electromagnetic fields from lightning induce high transient voltage and current spikes in unprotected aircraft wiring, which can cause permanent electronic damage.",
        "Induced electromagnetic pulses (EMP) cause voltage spikes in aircraft wiring."
    },
    {
        "Where are fuselage bulkheads typically located?",
        {"In areas such as the nose, tail, wheel well, and wing junction.", "Exclusively along the cabin ceiling above the overhead bins.", "Inside the leading-edge slat mechanism tracks."},
        "In areas such as the nose, tail, wheel well, and wing junction.",
        "Heavy structural bulkheads are situated at high-load introduction areas including the nose, main gear wheel wells, wing root attachments, and fuselage tailcone.",
        "Major load introduction points like nose, tail, and gear bays have bulkheads."
    },
    {
        "In Airbus nomenclature, what does a positive Z coordinate (+Z) indicate?",
        {"A position located above the fuselage zero datum (Z=0).", "A position located aft of the nose landing gear.", "A position on the right-hand wingtip."},
        "A position located above the fuselage zero datum (Z=0).",
        "On Airbus aircraft, vertical coordinates above the Z=0 fuselage datum are positive (+Z), and positions below are negative (-Z).",
        "+Z goes upward above the datum."
    },
    {
        "How are sub-major zones on the right side of the aircraft typically numbered in the ATA system?",
        {"With even numbers.", "With odd numbers.", "With letters from N to Z."},
        "With even numbers.",
        "By standard ATA convention, sub-major zones on the right-hand side carry even numbers, while those on the left-hand side carry odd numbers.",
        "Right side is even, left side is odd."
    },
    {
        "What is the primary load carried by the fuselage skin?",
        {"Majority of primary loads including shear, cabin pressurization hoop tension, and fuselage bending.", "Only secondary aerodynamic acoustic friction.", "Exclusively passenger baggage floor reaction forces."},
        "Majority of primary loads including shear, cabin pressurization hoop tension, and fuselage bending.",
        "The skin forms the largest and most critical structural member of the fuselage, carrying the primary shear, hoop tension from pressurization, and bending stresses.",
        "The outer skin is the main load-bearing element of a semi-monocoque fuselage."
    }
};

}