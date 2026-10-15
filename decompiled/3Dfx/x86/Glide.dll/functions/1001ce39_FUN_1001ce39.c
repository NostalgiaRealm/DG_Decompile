/*
 * FUN_1001ce39 at 1001ce39
 * undefined __thiscall FUN_1001ce39(void * this, uint param_1)
 * Address ranges: 1001ce39-1001d03f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001ce39(void *this,uint param_1)

{
  void *this_00;
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int unaff_EBX;
  int unaff_ESI;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  byte abStack_120 [4];
  int aiStack_11c [22];
  undefined4 auStack_c4 [22];
  undefined4 auStack_6c [26];
  
  if ((*(char *)(*(int *)((int)this + 4) + 0x52) != '\0') && (param_1 == 0)) {
    param_1 = 1;
  }
  (**(code **)(*(int *)this + 0x164))();
  FUN_1001c2ba(*(int *)((int)this + 0x315c));
  if (*(char *)((int)this + 0x2bc9) != '\0') {
    *(undefined1 *)((int)this + 0x2bc9) = 0;
    FUN_1001c0a4(*(void **)((int)this + 0x315c));
  }
  (**(code **)(*(int *)this + 0x150))();
  iVar2 = (**(code **)(**(int **)((int)this + 0x315c) + 0x2c))(0);
  (**(code **)(**(int **)((int)this + 0x315c) + 0x2c))(1);
  iVar3 = (**(code **)(**(int **)((int)this + 0x315c) + 0x2c))(2);
  piVar7 = (int *)(iVar2 + 0x4c);
  piVar9 = aiStack_11c;
  for (iVar5 = 0x16; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar9 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar9 = piVar9 + 1;
  }
  puVar8 = (undefined4 *)(unaff_EBX + 0x4c);
  puVar10 = auStack_c4;
  for (iVar5 = 0x16; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar8 = (undefined4 *)(iVar3 + 0x4c);
  puVar10 = auStack_6c;
  for (iVar5 = 0x16; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  bVar4 = 0;
  uVar6 = 0;
  do {
    if ((*(int *)(aiStack_11c[uVar6 - 4] + 100) == 0) &&
       (*(int *)(aiStack_11c[uVar6 - 4] + 0x68) == 0)) {
      bVar1 = 0;
    }
    else {
      bVar1 = 1;
    }
    bVar4 = bVar4 | bVar1;
    abStack_120[uVar6] = bVar1;
    if (bVar1 != 0) {
      FUN_1001c675(*(void **)((int)this + 0x315c),uVar6,1,0,0,*(LONG *)((int)this + 0x98),
                   *(LONG *)((int)this + 0x9c),0);
    }
    (**(code **)(**(int **)((int)this + 0x315c) + 0x20))(uVar6,1,0);
    uVar6 = uVar6 + 1;
  } while (uVar6 < 3);
  (**(code **)(*(int *)this + 0x168))();
  if ((*(char *)((int)this + 0xdd) != '\0') || (bVar4 != 0)) {
    piVar7 = aiStack_11c;
    piVar9 = (int *)(unaff_ESI + 0x4c);
    for (iVar5 = 0x16; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar9 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar9 = piVar9 + 1;
    }
    puVar8 = auStack_c4;
    puVar10 = (undefined4 *)(unaff_EBX + 0x4c);
    for (iVar5 = 0x16; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar8 = auStack_6c;
    puVar10 = (undefined4 *)(iVar3 + 0x4c);
    for (iVar5 = 0x16; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    FUN_10021e9a(unaff_ESI);
    FUN_10021e9a(unaff_EBX);
    FUN_10021e9a(iVar3);
  }
  uVar6 = 0;
  do {
    if (abStack_120[uVar6] != 0) {
      this_00 = (void *)aiStack_11c[uVar6 - 4];
      FUN_1001c535(*(void **)((int)this + 0x315c),uVar6,*(int *)((int)this_00 + 0x5c),
                   *(int *)((int)this_00 + 0x60),*(char *)((int)this_00 + 0x7d),
                   *(char *)((int)this_00 + 0x81),'\0','\0',*(undefined1 *)((int)this_00 + 0x7f),
                   *(undefined4 *)((int)this_00 + 0x74),*(undefined4 *)((int)this_00 + 0x78));
      if (*(uint *)((int)this + 0x2964) == uVar6) {
        FUN_10021cb5(this_00,*(int *)((int)this + 0x9c));
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 3);
  FUN_1001c7d0(*(void **)((int)this + 0x315c),param_1);
  *(int *)((int)this + 0x2a3c) = *(int *)((int)this + 0x2a3c) + 1;
  (**(code **)(*(int *)this + 0x16c))(param_1);
  return;
}

