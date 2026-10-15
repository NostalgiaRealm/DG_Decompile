/*
 * FUN_1800a2c28 at 1800a2c28
 * ulonglong __fastcall FUN_1800a2c28(longlong param_1, undefined8 * param_2)
 * Address ranges: 1800a2c28-1800a2d53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800a2c28(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  bool bVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 extraout_var;
  
  uVar6 = FUN_1800e06fc(*(longlong *)(param_1 + 0x50),*(longlong *)(param_1 + 0x130));
  if ((uVar6 == 0) || (uVar6 == *(ulonglong *)(param_1 + 0x118))) {
    lVar7 = FUN_1800a2ac4(param_1);
    *(longlong *)(param_1 + 0x138) = lVar7;
    uVar6 = 0;
    if (lVar7 != 0) {
      bVar4 = FUN_1800a29fc(param_1,param_2);
      if (bVar4) {
        *(undefined8 *)(param_1 + 0x140) = 0;
        uVar8 = FUN_1800e055c(*(longlong **)(param_1 + 0x50),*(longlong *)(param_1 + 0x138),1);
        if ((char)uVar8 == '\0') {
          uVar5 = FUN_1800e05b4(*(longlong **)(param_1 + 0x50),*(longlong *)(param_1 + 0x130),0);
          uVar6 = CONCAT44(extraout_var,uVar5);
          goto LAB_1800a2cb2;
        }
      }
      lVar7 = *(longlong *)(param_1 + 0x138);
      plVar3 = *(longlong **)(lVar7 + 0xda0);
      if (plVar3 != (longlong *)0x0) {
        uVar5 = *(undefined4 *)(lVar7 + 0xdb0);
        uVar1 = *(undefined4 *)(lVar7 + 0xdb4);
        uVar2 = *(undefined4 *)(&DAT_180100470 + (longlong)*(int *)(lVar7 + 0x34) * 4);
        FUN_180099ff4(param_1 + 0x60,1,1);
        *(longlong **)(param_1 + 0x74) = plVar3;
        *(undefined4 *)(param_1 + 0x8c) = uVar5;
        *(undefined4 *)(param_1 + 0x90) = uVar1;
        *(undefined4 *)(param_1 + 0xa8) = uVar2;
        (**(code **)(*plVar3 + 8))(plVar3);
        *(undefined2 *)(param_1 + 0xac) = 0x101;
      }
      lVar7 = *(longlong *)(param_1 + 0x138);
      *(uint *)(param_1 + 0x24) = *(uint *)(lVar7 + 0x18) / *(uint *)(lVar7 + 0x20);
      uVar6 = (ulonglong)*(uint *)(lVar7 + 0x1c) / (ulonglong)*(uint *)(lVar7 + 0x24);
      *(int *)(param_1 + 0x28) = (int)uVar6;
      return CONCAT71((int7)(uVar6 >> 8),1);
    }
  }
LAB_1800a2cb2:
  *(undefined8 *)(param_1 + 0x130) = 0;
  return uVar6 & 0xffffffffffffff00;
}

