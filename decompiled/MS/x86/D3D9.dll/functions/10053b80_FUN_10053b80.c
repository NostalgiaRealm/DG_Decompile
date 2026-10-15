/*
 * FUN_10053b80 at 10053b80
 * undefined __thiscall FUN_10053b80(void * this, undefined4 param_1, uint param_2)
 * Address ranges: 10053b80-10053c77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10053b80(void *this,undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  
  if ((param_2 != 0) &&
     ((**(code **)(*(int *)this + 0xec))(0), *(char *)(param_2 + 0x1ebec) == '\0')) {
    puVar1 = (undefined4 *)(param_2 + 0xf5d0);
    puVar13 = puVar1;
    for (iVar12 = 0x3d74; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar13 = 0xffffffff;
      puVar13 = puVar13 + 1;
    }
    uVar11 = 0;
    if (((undefined4 *)(param_2 + 0xf5cc) < puVar1) || (param_2 + 0x1eb9c < param_2)) {
      iVar12 = 0;
      do {
        puVar3 = puVar1 + uVar11;
        uVar5 = puVar3[1];
        uVar6 = puVar3[2];
        uVar7 = puVar3[3];
        puVar2 = (uint *)(param_2 + uVar11 * 4);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar4 = puVar1 + uVar11;
        *puVar4 = ~(*puVar2 ^ *puVar3);
        puVar4[1] = ~(uVar8 ^ uVar5);
        puVar4[2] = ~(uVar9 ^ uVar6);
        puVar4[3] = ~(uVar10 ^ uVar7);
        uVar11 = uVar11 + 0x10;
        puVar3 = (uint *)(iVar12 + 0x10 + (int)puVar1);
        uVar5 = puVar3[1];
        uVar6 = puVar3[2];
        uVar7 = puVar3[3];
        puVar2 = (uint *)(iVar12 + 0x10 + param_2);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar4 = (uint *)(iVar12 + 0x10 + (int)puVar1);
        *puVar4 = ~(*puVar2 ^ *puVar3);
        puVar4[1] = ~(uVar8 ^ uVar5);
        puVar4[2] = ~(uVar9 ^ uVar6);
        puVar4[3] = ~(uVar10 ^ uVar7);
        puVar3 = (uint *)(iVar12 + 0x20 + (int)puVar1);
        uVar5 = puVar3[1];
        uVar6 = puVar3[2];
        uVar7 = puVar3[3];
        puVar2 = (uint *)(iVar12 + 0x20 + param_2);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar4 = (uint *)(iVar12 + 0x20 + (int)puVar1);
        *puVar4 = ~(*puVar2 ^ *puVar3);
        puVar4[1] = ~(uVar8 ^ uVar5);
        puVar4[2] = ~(uVar9 ^ uVar6);
        puVar4[3] = ~(uVar10 ^ uVar7);
        puVar3 = (uint *)(iVar12 + 0x30 + (int)puVar1);
        uVar5 = puVar3[1];
        uVar6 = puVar3[2];
        uVar7 = puVar3[3];
        puVar2 = (uint *)(iVar12 + 0x30 + param_2);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar4 = (uint *)(iVar12 + 0x30 + (int)puVar1);
        *puVar4 = ~(*puVar2 ^ *puVar3);
        puVar4[1] = ~(uVar8 ^ uVar5);
        puVar4[2] = ~(uVar9 ^ uVar6);
        puVar4[3] = ~(uVar10 ^ uVar7);
        iVar12 = iVar12 + 0x40;
        if (0x3d6f < uVar11) goto joined_r0x10053c43;
      } while( true );
    }
    do {
      *(uint *)(param_2 + 0xf5d0 + uVar11 * 4) =
           ~(*(uint *)(param_2 + uVar11 * 4) ^ *(uint *)(param_2 + 0xf5d0 + uVar11 * 4));
      uVar11 = uVar11 + 1;
joined_r0x10053c43:
    } while (uVar11 < 0x3d74);
    *(undefined1 *)(param_2 + 0x1ebec) = 1;
  }
  return;
}

