/*
 * FUN_1006fd40 at 1006fd40
 * undefined FUN_1006fd40(void)
 * Address ranges: 1006fd40-1006fe47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1006fd40(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x100000001;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x187] = 0;
  param_1[0x188] = 0;
  *(undefined4 *)(param_1 + 0x189) = 1;
  param_1[0x1a7] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  *(undefined4 *)(param_1 + 0x1ab) = 0x100;
  *(undefined2 *)((int)param_1 + 0xd5d) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  (*(code *)PTR_FUN_100a1098)(param_1 + 0x1a5);
  uVar2 = 0;
  do {
    fVar3 = (float)uVar2 / 255.0;
    *(float *)((int)param_1 + uVar2 * 0xc + 0x40) = fVar3;
    uVar1 = uVar2 + 1;
    *(float *)((int)param_1 + (uVar2 + 5) * 0xc) = fVar3;
    *(float *)((int)param_1 + uVar2 * 0xc + 0x38) = fVar3;
    uVar2 = uVar1;
  } while (uVar1 < 0x100);
  return param_1;
}

