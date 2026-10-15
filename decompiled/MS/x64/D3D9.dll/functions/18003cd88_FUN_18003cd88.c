/*
 * FUN_18003cd88 at 18003cd88
 * undefined8 __fastcall FUN_18003cd88(longlong param_1, char param_2, char param_3, undefined8 * param_4)
 * Address ranges: 18003cd88-18003ce54
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18003cd88(longlong param_1,char param_2,char param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_18 [2];
  
  uVar4 = 1;
  if (*(int *)(param_1 + 0x30) == 1) {
    if (param_2 == '\0') {
      if (param_3 == '\0') {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8);
        (**(code **)(*plVar1 + 0xe0))(plVar1,*(undefined8 *)(param_1 + 0x20));
        do {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8);
          iVar2 = (**(code **)(*plVar1 + 0xe8))(plVar1,*(undefined8 *)(param_1 + 0x20),0,0,0);
        } while (iVar2 == 1);
      }
      lVar3 = *(longlong *)(param_1 + 0x10);
      uVar5 = 5;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x10);
      uVar5 = 4;
    }
    iVar2 = (**(code **)(**(longlong **)(lVar3 + 8) + 0x70))
                      (*(longlong **)(lVar3 + 8),*(undefined8 *)(param_1 + 0x18),0,uVar5,0,local_18)
    ;
    if (iVar2 == -0x7789fde4) {
      uVar4 = 2;
    }
    else if (-1 < iVar2) {
      uVar4 = 0;
      *param_4 = local_18[0];
    }
  }
  return uVar4;
}

