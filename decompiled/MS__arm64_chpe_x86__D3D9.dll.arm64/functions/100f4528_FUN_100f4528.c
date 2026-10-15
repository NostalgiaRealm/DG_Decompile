/*
 * FUN_100f4528 at 100f4528
 * undefined FUN_100f4528(void)
 * Address ranges: 100f4528-100f469b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_100f4528(undefined8 param_1,undefined8 param_2,ulonglong param_3)

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
  (*(code *)PTR_FUN_1016c13c)(0,0x200,uVar5,0xffffffff,iVar1 + 0x6b0,0x1ffe,0,0);
  FUN_100f42f8(iVar1 + 0x80);
  FUN_101310b0(uVar2 & 0xffffffff,uVar5);
  if (*(int *)(iVar1 + 4) - 1U < 0xfffffffe) {
    cVar3 = FUN_100f8bc8(uVar7,uVar2 & 0xffffffff,param_3 & 0xffffffff);
    if (cVar3 == '\0') {
      FUN_100fb430(iVar1 + 0x10);
      puVar6 = (undefined4 *)param_3;
      if (puVar6 != (undefined4 *)0x0) {
        *(undefined4 *)(iVar1 + 0x14) = *puVar6;
        *(undefined4 *)(iVar1 + 0x18) = puVar6[1];
        *(undefined4 *)(iVar1 + 0x1c) = puVar6[2];
        *(char **)(iVar1 + 0x20) = s__dgVoodoo_IniParser__10164168;
        *(undefined4 *)(iVar1 + 0x24) = puVar6[4];
        *(undefined4 *)(iVar1 + 0x28) = 0;
      }
      uVar5 = FUN_100fb648(iVar1 + 0x10,uVar2 & 0xffffffff,1);
      if ((uVar5 & 1) != 0) {
        cVar3 = FUN_100f82f0(iVar1 + 0x80,iVar1 + 0x10,param_3 & 0xffffffff);
        if (cVar3 == '\0') {
          FUN_101325d0(iVar1 + 0x4a0,0,0x20c);
          iVar4 = FUN_100f42f8(iVar1 + 0x4a0);
        }
        else {
          FUN_101325a0(iVar1 + 0x290,iVar1 + 0x80,0x20c);
          iVar4 = iVar1 + 0x290;
        }
        FUN_101325a0(uVar7,iVar4,0x20c);
      }
      FUN_100fb5b0(iVar1 + 0x10);
    }
  }
  else {
    cVar3 = '\0';
  }
  FUN_10131200(uVar2 & 0xffffffff);
  return cVar3;
}

