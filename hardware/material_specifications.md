# BioGrip Kinematics — 3D Printing Material Specifications

This document provides key material properties for the three filaments supported by the BioGrip Arm v1 chassis. Specific volume (the inverse of density) is the primary property used to convert between volumetric (cm³) slicer output and mass-based (g) filament consumption.

---

## Supported Filaments

| Material | Density (g/cm³) | Specific Volume (cm³/g) | Tensile Strength (MPa) | Recommended Print Temp (°C) | Bed Temp (°C) |
|----------|-----------------|-------------------------|------------------------|-----------------------------|---------------|
| PLA      | 1.24            | 0.806                   | ~50                    | 190–220                     | 20–60         |
| PETG     | 1.27            | 0.787                   | ~53                    | 230–250                     | 70–85         |
| ABS      | 1.05            | 0.952                   | ~40                    | 220–250                     | 90–110        |

---

## How to Use Specific Volume

**Specific Volume** = 1 / Density

It expresses the volume occupied by one gram of material (cm³/g). Use it to:

1. **Estimate filament weight from slicer volume output:**

   ```
   Mass (g) = Slicer Volume (cm³) / Specific Volume (cm³/g)
   ```

   *Example — PLA chassis at 45 cm³ slicer output:*
   ```
   Mass = 45 cm³ / 0.806 cm³/g ≈ 55.8 g
   ```

2. **Estimate filament cost:**

   ```
   Cost (BDT) = Mass (g) × (Spool Price / Spool Mass in g)
   ```

3. **Compare material choices by weight:**
   ABS has the highest specific volume (lowest density), making it the lightest option per unit of printed volume. PLA and PETG are denser and add slightly more mass to the final arm assembly.

---

## Material Selection Guide for BioGrip Arm v1

| Consideration           | Recommended Material |
|-------------------------|----------------------|
| Lowest weight           | ABS (0.952 cm³/g)    |
| Best layer adhesion     | PETG                 |
| Easiest to print        | PLA                  |
| Highest impact strength | PETG or ABS          |
| Outdoor / UV exposure   | PETG or ABS          |

> **Default recommendation:** PETG — balances printability, durability, and moisture resistance suitable for daily prosthetic use.

---

## Component Volume Estimates

The following estimates are derived from the v1 STL files located in `hardware/3d_cad_models/`. Re-slice at your target infill to get exact figures.

| Component                  | STL File                    | Est. Volume at 20% Infill (cm³) | Est. Mass — PLA (g) | Est. Mass — PETG (g) | Est. Mass — ABS (g) |
|----------------------------|-----------------------------|----------------------------------|----------------------|----------------------|----------------------|
| Arm & Hand Chassis         | `biogrip_chassis_v1.stl`    | ~145                             | ~180                 | ~184                 | ~152                 |
| Finger Joints (full set)   | `finger_joints_v1.stl`      | ~18                              | ~22                  | ~23                  | ~19                  |
| **Total Assembly**         |                             | **~163**                         | **~202**             | **~207**             | **~171**             |

> *Estimates assume 20% gyroid infill, 3 perimeters, 0.2 mm layer height. Actual values will vary with slicer settings.*

---

*© 2024 BioGrip Kinematics. All rights reserved.*
