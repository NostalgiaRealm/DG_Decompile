/*
 * FUN_18005f5c0 at 18005f5c0
 * undefined __fastcall FUN_18005f5c0(longlong * param_1, undefined8 param_2, ulonglong param_3)
 * Address ranges: 18005f5c0-18005f6f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005f5c0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  
  if ((param_3 != 0) &&
     ((**(code **)(*param_1 + 0x1d8))(param_1,0), *(char *)(param_3 + 0x1ebec) == '\0')) {
    FUN_1800fbea0((undefined1 *)(param_3 + 0xf5d0),0xff,0xf5d0);
    uVar12 = 0;
    if (((undefined1 *)(param_3 + 0xf5cc) < (undefined1 *)(param_3 + 0xf5d0)) ||
       (param_3 + 0x1eb9c < param_3)) {
      do {
        puVar2 = (uint *)(param_3 + 0xf5d0 + uVar12 * 4);
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        iVar4 = (int)uVar12;
        uVar11 = (ulonglong)(iVar4 + 4);
        puVar1 = (uint *)(param_3 + uVar12 * 4);
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar3 = (uint *)(param_3 + 0xf5d0 + uVar12 * 4);
        *puVar3 = ~(*puVar1 ^ *puVar2);
        puVar3[1] = ~(uVar8 ^ uVar5);
        puVar3[2] = ~(uVar9 ^ uVar6);
        puVar3[3] = ~(uVar10 ^ uVar7);
        puVar2 = (uint *)(param_3 + 0xf5d0 + uVar11 * 4);
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        puVar1 = (uint *)(param_3 + uVar11 * 4);
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar3 = (uint *)(param_3 + 0xf5d0 + uVar11 * 4);
        *puVar3 = ~(*puVar1 ^ *puVar2);
        puVar3[1] = ~(uVar8 ^ uVar5);
        puVar3[2] = ~(uVar9 ^ uVar6);
        puVar3[3] = ~(uVar10 ^ uVar7);
        uVar12 = (ulonglong)(iVar4 + 8);
        puVar2 = (uint *)(param_3 + 0xf5d0 + uVar12 * 4);
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        puVar1 = (uint *)(param_3 + uVar12 * 4);
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar3 = (uint *)(param_3 + 0xf5d0 + uVar12 * 4);
        *puVar3 = ~(*puVar1 ^ *puVar2);
        puVar3[1] = ~(uVar8 ^ uVar5);
        puVar3[2] = ~(uVar9 ^ uVar6);
        puVar3[3] = ~(uVar10 ^ uVar7);
        uVar11 = (ulonglong)(iVar4 + 0xc);
        uVar13 = iVar4 + 0x10;
        uVar12 = (ulonglong)uVar13;
        puVar2 = (uint *)(param_3 + 0xf5d0 + uVar11 * 4);
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        puVar1 = (uint *)(param_3 + uVar11 * 4);
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar3 = (uint *)(param_3 + 0xf5d0 + uVar11 * 4);
        *puVar3 = ~(*puVar1 ^ *puVar2);
        puVar3[1] = ~(uVar8 ^ uVar5);
        puVar3[2] = ~(uVar9 ^ uVar6);
        puVar3[3] = ~(uVar10 ^ uVar7);
        if (0x3d6f < uVar13) goto joined_r0x00018005f6c5;
      } while( true );
    }
    do {
      *(uint *)(param_3 + 0xf5d0 + uVar12 * 4) =
           ~(*(uint *)(param_3 + uVar12 * 4) ^ *(uint *)(param_3 + 0xf5d0 + uVar12 * 4));
      uVar13 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar13;
joined_r0x00018005f6c5:
    } while (uVar13 < 0x3d74);
    *(undefined1 *)(param_3 + 0x1ebec) = 1;
  }
  return;
}

