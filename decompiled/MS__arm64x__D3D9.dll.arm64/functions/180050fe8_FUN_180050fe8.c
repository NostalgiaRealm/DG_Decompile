/*
 * FUN_180050fe8 at 180050fe8
 * undefined FUN_180050fe8(void)
 * Address ranges: 180050fe8-18005113b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180050fe8(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  
  uVar3 = *(uint *)(param_1 + 0x78);
  if (uVar3 != 0) {
    uVar6 = 0;
    uVar7 = uVar3;
    do {
      uVar4 = uVar7 + uVar6 >> 1;
      uVar5 = (ulonglong)uVar4;
      uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0x70) + uVar5 * 0x18);
      if (uVar9 <= param_2) {
        if (param_2 <= uVar9) break;
        uVar6 = uVar4 + 1;
        uVar5 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar6);
    if (((uint)uVar5 != uVar3) &&
       (puVar8 = (ulonglong *)(*(longlong *)(param_1 + 0x70) + uVar5 * 0x18), *puVar8 == param_2)) {
      puVar8 = puVar8 + 2;
      if (puVar8 != (ulonglong *)0x0) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)(uint)*puVar8 * 0x40 + 0x3d) = 1;
        uVar3 = *(uint *)(param_1 + 0x78);
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar6 = 0;
          uVar7 = uVar3;
          do {
            uVar4 = uVar7 + uVar6 >> 1;
            uVar5 = (ulonglong)uVar4;
            uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0x70) + uVar5 * 0x18);
            if (uVar9 <= param_2) {
              if (param_2 <= uVar9) break;
              uVar6 = uVar4 + 1;
              uVar5 = (ulonglong)(uVar4 + 1);
              uVar4 = uVar7;
            }
            uVar7 = uVar4;
          } while (uVar7 != uVar6);
        }
        if (((uint)uVar5 != uVar3) &&
           (*(ulonglong *)(*(longlong *)(param_1 + 0x70) + uVar5 * 0x18) == param_2)) {
          uVar6 = (uint)uVar5 + 1;
          if (uVar6 < uVar3) {
            do {
              uVar5 = (ulonglong)uVar6;
              puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar6 - 1) * 0x18)
              ;
              uVar6 = uVar6 + 1;
              puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + uVar5 * 0x18);
              uVar10 = *puVar2;
              puVar1[1] = puVar2[1];
              *puVar1 = uVar10;
              puVar1[2] = puVar2[2];
            } while (uVar6 < *(uint *)(param_1 + 0x78));
          }
          *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
        }
      }
      goto LAB_180051130;
    }
  }
  puVar8 = (ulonglong *)0x0;
LAB_180051130:
  return puVar8 != (ulonglong *)0x0;
}

