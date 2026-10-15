/*
 * FUN_180205f08 at 180205f08
 * undefined FUN_180205f08(void)
 * Address ranges: 180205f08-180205f8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180205f08(longlong *param_1,uint param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (param_2 < uVar2) {
    param_2 = param_2 + 1;
    if (param_2 < uVar2) {
      do {
        puVar4 = (undefined8 *)(*param_1 + (ulonglong)(param_2 - 1) * 0xa8);
        puVar3 = (undefined8 *)(*param_1 + (ulonglong)param_2 * 0xa8);
        param_2 = param_2 + 1;
        uVar1 = *puVar3;
        uVar6 = puVar3[3];
        uVar5 = puVar3[2];
        puVar4[1] = puVar3[1];
        *puVar4 = uVar1;
        puVar4[3] = uVar6;
        puVar4[2] = uVar5;
        uVar1 = puVar3[4];
        uVar6 = puVar3[7];
        uVar5 = puVar3[6];
        puVar4[5] = puVar3[5];
        puVar4[4] = uVar1;
        puVar4[7] = uVar6;
        puVar4[6] = uVar5;
        uVar1 = puVar3[8];
        uVar6 = puVar3[0xb];
        uVar5 = puVar3[10];
        puVar4[9] = puVar3[9];
        puVar4[8] = uVar1;
        puVar4[0xb] = uVar6;
        puVar4[10] = uVar5;
        uVar1 = puVar3[0xc];
        uVar6 = puVar3[0xf];
        uVar5 = puVar3[0xe];
        puVar4[0xd] = puVar3[0xd];
        puVar4[0xc] = uVar1;
        puVar4[0xf] = uVar6;
        puVar4[0xe] = uVar5;
        uVar1 = puVar3[0x10];
        uVar6 = puVar3[0x13];
        uVar5 = puVar3[0x12];
        puVar4[0x11] = puVar3[0x11];
        puVar4[0x10] = uVar1;
        puVar4[0x13] = uVar6;
        puVar4[0x12] = uVar5;
        puVar4[0x14] = puVar3[0x14];
        uVar2 = *(uint *)(param_1 + 1);
      } while (param_2 < uVar2);
    }
    *(uint *)(param_1 + 1) = uVar2 - 1;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

