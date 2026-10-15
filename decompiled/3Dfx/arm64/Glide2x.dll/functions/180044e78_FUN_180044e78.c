/*
 * FUN_180044e78 at 180044e78
 * undefined8 __cdecl FUN_180044e78(longlong * param_1, uint param_2)
 * Address ranges: 180044e78-180044efb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180044e78(longlong *param_1,uint param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (param_2 < uVar2) {
    uVar4 = param_2 + 1;
    if (uVar4 < uVar2) {
      do {
        puVar5 = (undefined8 *)(*param_1 + (ulonglong)(uVar4 - 1) * 0xa8);
        puVar3 = (undefined8 *)(*param_1 + (ulonglong)uVar4 * 0xa8);
        uVar4 = uVar4 + 1;
        uVar7 = *puVar3;
        uVar6 = puVar3[3];
        uVar1 = puVar3[2];
        puVar5[1] = puVar3[1];
        *puVar5 = uVar7;
        puVar5[3] = uVar6;
        puVar5[2] = uVar1;
        uVar7 = puVar3[4];
        uVar6 = puVar3[7];
        uVar1 = puVar3[6];
        puVar5[5] = puVar3[5];
        puVar5[4] = uVar7;
        puVar5[7] = uVar6;
        puVar5[6] = uVar1;
        uVar7 = puVar3[8];
        uVar6 = puVar3[0xb];
        uVar1 = puVar3[10];
        puVar5[9] = puVar3[9];
        puVar5[8] = uVar7;
        puVar5[0xb] = uVar6;
        puVar5[10] = uVar1;
        uVar7 = puVar3[0xc];
        uVar6 = puVar3[0xf];
        uVar1 = puVar3[0xe];
        puVar5[0xd] = puVar3[0xd];
        puVar5[0xc] = uVar7;
        puVar5[0xf] = uVar6;
        puVar5[0xe] = uVar1;
        uVar7 = puVar3[0x10];
        uVar6 = puVar3[0x13];
        uVar1 = puVar3[0x12];
        puVar5[0x11] = puVar3[0x11];
        puVar5[0x10] = uVar7;
        puVar5[0x13] = uVar6;
        puVar5[0x12] = uVar1;
        puVar5[0x14] = puVar3[0x14];
        uVar2 = *(uint *)(param_1 + 1);
      } while (uVar4 < uVar2);
    }
    *(uint *)(param_1 + 1) = uVar2 - 1;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

