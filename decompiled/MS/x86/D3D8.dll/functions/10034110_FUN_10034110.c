/*
 * FUN_10034110 at 10034110
 * undefined __thiscall FUN_10034110(void * this, char param_1)
 * Address ranges: 10034110-10034376
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10034110(void *this,char param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  if (*(char *)((int)this + 0xd97b) != '\0') {
    if (*(char *)((int)this + 0x5955) == '\0') {
      if ((*(int **)((int)this + 0xdbf4) == (int *)0x0) ||
         (cVar3 = (**(code **)(**(int **)((int)this + 0xdbf4) + 0x44))(), cVar3 == '\0')) {
        local_40 = *(int *)((int)this + 0x444);
        uStack_3c = *(undefined4 *)((int)this + 0x448);
        uStack_38 = *(undefined4 *)((int)this + 0x44c);
        uStack_34 = *(undefined4 *)((int)this + 0x450);
        local_10 = *(undefined4 *)((int)this + 0x474);
        local_30 = *(undefined4 *)((int)this + 0x454);
        uStack_2c = *(undefined4 *)((int)this + 0x458);
        uStack_28 = *(undefined4 *)((int)this + 0x45c);
        uStack_24 = *(undefined4 *)((int)this + 0x460);
        local_20 = *(undefined4 *)((int)this + 0x464);
        uStack_1c = *(undefined4 *)((int)this + 0x468);
        uStack_18 = *(undefined4 *)((int)this + 0x46c);
        uStack_14 = *(undefined4 *)((int)this + 0x470);
      }
      else {
        local_40 = *(int *)((int)this + 0x410);
        uStack_3c = *(undefined4 *)((int)this + 0x414);
        uStack_38 = *(undefined4 *)((int)this + 0x418);
        uStack_34 = *(undefined4 *)((int)this + 0x41c);
        local_10 = *(undefined4 *)((int)this + 0x440);
        local_30 = *(undefined4 *)((int)this + 0x420);
        uStack_2c = *(undefined4 *)((int)this + 0x424);
        uStack_28 = *(undefined4 *)((int)this + 0x428);
        uStack_24 = *(undefined4 *)((int)this + 0x42c);
        local_20 = *(undefined4 *)((int)this + 0x430);
        uStack_1c = *(undefined4 *)((int)this + 0x434);
        uStack_18 = *(undefined4 *)((int)this + 0x438);
        uStack_14 = *(undefined4 *)((int)this + 0x43c);
      }
      if (*(int *)((int)this + 0xdbf4) == 0) {
        local_40 = 0;
      }
    }
    else {
      local_40 = *(int *)((int)this + 0x478);
      uStack_3c = *(undefined4 *)((int)this + 0x47c);
      uStack_38 = *(undefined4 *)((int)this + 0x480);
      uStack_34 = *(undefined4 *)((int)this + 0x484);
      local_10 = *(undefined4 *)((int)this + 0x4a8);
      local_30 = *(undefined4 *)((int)this + 0x488);
      uStack_2c = *(undefined4 *)((int)this + 0x48c);
      uStack_28 = *(undefined4 *)((int)this + 0x490);
      uStack_24 = *(undefined4 *)((int)this + 0x494);
      local_20 = *(undefined4 *)((int)this + 0x498);
      uStack_1c = *(undefined4 *)((int)this + 0x49c);
      uStack_18 = *(undefined4 *)((int)this + 0x4a0);
      uStack_14 = *(undefined4 *)((int)this + 0x4a4);
    }
    piVar1 = *(int **)((int)this + 0xda98);
    if ((piVar1 != (int *)0x0) && (*(int **)((int)this + 0xdbf4) != (int *)0x0)) {
      if ((*piVar1 == 0) || (piVar1[1] == 0)) {
        cVar3 = '\0';
      }
      else {
        cVar3 = '\x01';
      }
      if ((*(int *)((int)this + 0x410) == 0) || (*(int *)((int)this + 0x414) == 0)) {
        cVar4 = '\0';
      }
      else {
        cVar4 = '\x01';
      }
      if (cVar3 != cVar4) {
        local_8 = (**(code **)(**(int **)((int)this + 0xdbf4) + 0x84))();
        local_c = (int)local_8 >> 0x1f;
        uVar5 = FUN_10038970((void *)((int)this + 0xdb38),local_8,local_c);
        if (((uVar5 == *(uint *)((int)this + 0xdb40)) ||
            (iVar2 = *(int *)((int)this + 0xdb3c), *(uint *)(iVar2 + uVar5 * 0x18) != local_8)) ||
           (*(uint *)(iVar2 + 4 + uVar5 * 0x18) != local_c)) {
          puVar6 = &DAT_00000006;
        }
        else {
          puVar6 = (undefined1 *)(iVar2 + uVar5 * 0x18 + 0x12);
        }
        *puVar6 = 1;
        *(undefined1 *)((int)this + 0xde5b) = 1;
      }
      if ((*(int *)(*(int *)((int)this + 0xda98) + 0xc) != 0) != (*(int *)((int)this + 0x41c) != 0))
      {
        local_c = (**(code **)(**(int **)((int)this + 0xdbf4) + 0x84))();
        local_8 = (int)local_c >> 0x1f;
        uVar5 = FUN_10038970((void *)((int)this + 0xdb38),local_c,local_8);
        if (((uVar5 == *(uint *)((int)this + 0xdb40)) ||
            (iVar2 = *(int *)((int)this + 0xdb3c), *(uint *)(iVar2 + uVar5 * 0x18) != local_c)) ||
           (*(uint *)(iVar2 + 4 + uVar5 * 0x18) != local_8)) {
          puVar6 = &DAT_00000006;
        }
        else {
          puVar6 = (undefined1 *)(iVar2 + uVar5 * 0x18 + 0x12);
        }
        *puVar6 = 1;
        *(undefined1 *)((int)this + 0xde5b) = 1;
      }
    }
    uVar7 = FUN_10039100((void *)(*(int *)((int)this + 0xd9b8) + 0x15f0),&local_40);
    *(undefined4 *)((int)this + 0xda98) = uVar7;
    *(undefined1 *)((int)this + 0xde59) = 1;
    *(undefined1 *)((int)this + 0xd9a9) = 1;
    if (*(char *)((int)this + 0xd97b) != '\0') goto LAB_10034316;
  }
  if (param_1 == '\0') {
    return;
  }
LAB_10034316:
  if ((*(int *)((int)this + 0xda98) == 0) || (*(int *)(*(int *)((int)this + 0xda98) + 0xc) != 0)) {
    uVar5 = (uint)(byte)(&DAT_00005890 + (*(char *)((int)this + 0x5955) != '\0'))[(int)this];
    iVar2 = *(int *)(*(int *)((int)this + 0xd9b8) + 0x1304);
    if (uVar5 != *(uint *)(iVar2 + 0x61c)) {
      FUN_10098377(iVar2);
      (**(code **)(**(int **)(iVar2 + 0x638) + 0x60))(*(int **)(iVar2 + 0x638),uVar5);
      *(uint *)(iVar2 + 0x61c) = uVar5;
    }
  }
  *(undefined1 *)((int)this + 0xd97b) = 0;
  return;
}

