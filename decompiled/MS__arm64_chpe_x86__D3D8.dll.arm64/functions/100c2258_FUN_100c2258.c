/*
 * FUN_100c2258 at 100c2258
 * undefined FUN_100c2258(void)
 * Address ranges: 100c2258-100c23cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_100c2258(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong extraout_x15;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 unaff_w29;
  undefined1 auVar8 [16];
  
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x30) = unaff_w29;
  auVar8 = FUN_100013c0();
  uVar2 = (ZEXT48(&stack0x00000000) - 0x30) + extraout_x15 * -0x10;
  uVar5 = auVar8._8_8_ & 0xffffffff;
  uVar7 = auVar8._0_8_ & 0xffffffff;
  iVar1 = (int)uVar2;
  (*(code *)PTR_FUN_1013413c)(0,0x200,uVar5,0xffffffff,iVar1 + 0x6b0,0x1ffe,0,0);
  FUN_100c2028(iVar1 + 0x80);
  FUN_100fdae0(uVar2 & 0xffffffff,uVar5);
  if (*(int *)(iVar1 + 4) - 1U < 0xfffffffe) {
    cVar3 = FUN_100c68f8(uVar7,uVar2 & 0xffffffff,param_3 & 0xffffffff);
    if (cVar3 == '\0') {
      FUN_100c9160(iVar1 + 0x10);
      puVar6 = (undefined4 *)param_3;
      if (puVar6 != (undefined4 *)0x0) {
        *(undefined4 *)(iVar1 + 0x14) = *puVar6;
        *(undefined4 *)(iVar1 + 0x18) = puVar6[1];
        *(undefined4 *)(iVar1 + 0x1c) = puVar6[2];
        *(char **)(iVar1 + 0x20) = s__dgVoodoo_IniParser__1012d330;
        *(undefined4 *)(iVar1 + 0x24) = puVar6[4];
        *(undefined4 *)(iVar1 + 0x28) = 0;
      }
      uVar5 = FUN_100c9378(iVar1 + 0x10,uVar2 & 0xffffffff,1);
      if ((uVar5 & 1) != 0) {
        cVar3 = FUN_100c6020(iVar1 + 0x80,iVar1 + 0x10,param_3 & 0xffffffff);
        if (cVar3 == '\0') {
          FUN_100ff690(iVar1 + 0x4a0,0,0x20c);
          iVar4 = FUN_100c2028(iVar1 + 0x4a0);
        }
        else {
          FUN_100ff660(iVar1 + 0x290,iVar1 + 0x80,0x20c);
          iVar4 = iVar1 + 0x290;
        }
        FUN_100ff660(uVar7,iVar4,0x20c);
      }
      FUN_100c92e0(iVar1 + 0x10);
    }
  }
  else {
    cVar3 = '\0';
  }
  FUN_100fdc30(uVar2 & 0xffffffff);
  return cVar3;
}

