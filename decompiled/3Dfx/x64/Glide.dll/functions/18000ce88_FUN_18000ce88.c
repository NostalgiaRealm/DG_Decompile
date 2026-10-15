/*
 * FUN_18000ce88 at 18000ce88
 * undefined1 __fastcall FUN_18000ce88(undefined8 param_1, longlong param_2, longlong * param_3, undefined4 param_4)
 * Address ranges: 18000ce88-18000d05d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_18000ce88(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 uVar7;
  byte *pbVar8;
  uint uVar9;
  
  cVar2 = '\x01';
  uVar9 = 0;
  do {
    uVar3 = (**(code **)(*param_3 + 0x38))(param_3,param_4);
    if (uVar3 <= uVar9) {
      return cVar2;
    }
    pbVar6 = (byte *)(**(code **)(*param_3 + 0x40))(param_3,param_4,uVar9);
    uVar3 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar9);
    iVar4 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar9);
    pbVar8 = pbVar6;
    iVar5 = FUN_18005dc28(pbVar6,&DAT_180062b1c);
    puVar1 = (undefined4 *)(param_2 + 0x1fb);
    if (((iVar5 == 0) ||
        (pbVar8 = pbVar6, iVar5 = FUN_18005dc28(pbVar6,(byte *)"warning"),
        puVar1 = (undefined4 *)(param_2 + 0x1ff), iVar5 == 0)) ||
       (pbVar8 = pbVar6, iVar5 = FUN_18005dc28(pbVar6,(byte *)"error"),
       puVar1 = (undefined4 *)(param_2 + 0x203), iVar5 == 0)) {
      if ((iVar4 == 0) && (uVar3 != 0)) {
        uVar7 = FUN_18000cdf4(pbVar8,param_3,param_4,uVar9,puVar1,uVar3);
        cVar2 = (char)uVar7;
      }
    }
    else {
      iVar5 = FUN_18005dc28(pbVar6,(byte *)"maxtracelevel");
      if (iVar5 == 0) {
        if ((iVar4 == 0) && (uVar3 == 1)) {
          cVar2 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar9,0,param_2 + 0x207);
        }
      }
      else {
        iVar5 = FUN_18005dc28(pbVar6,(byte *)"logtofile");
        if (iVar5 != 0) {
          return 0;
        }
        if ((iVar4 == 0) && (uVar3 != 0)) {
          uVar7 = FUN_1800096fc(pbVar6,param_3,param_4,uVar9,(undefined1 *)(param_2 + 0x20b),uVar3);
          cVar2 = (char)uVar7;
        }
      }
    }
    uVar9 = uVar9 + 1;
  } while (cVar2 != '\0');
  return 0;
}

