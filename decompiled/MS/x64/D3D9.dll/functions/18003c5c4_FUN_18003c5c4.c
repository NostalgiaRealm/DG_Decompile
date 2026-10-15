/*
 * FUN_18003c5c4 at 18003c5c4
 * undefined4 __fastcall FUN_18003c5c4(longlong param_1, longlong param_2, int param_3, undefined8 * param_4, int param_5, byte param_6)
 * Address ranges: 18003c5c4-18003c7ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_18003c5c4(longlong param_1,longlong param_2,int param_3,undefined8 *param_4,int param_5,
             byte param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined4 local_res10 [6];
  undefined8 local_48;
  undefined4 local_40;
  
  bVar5 = param_6 & 1;
  if (bVar5 != 0) {
    FUN_180038960(param_1,0,0,0);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  iVar3 = -0x7fffbffb;
  if (param_3 == 9) {
    if (param_5 - 1U < 3) goto LAB_18003c653;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    iVar3 = (**(code **)(*plVar2 + 0xe8))(plVar2,uVar1,local_res10,-(param_5 != 0) & 8,bVar5 ^ 1);
  }
  else {
    if (param_3 != 0xb) {
      if (param_3 == 0xc) {
        if ((6 < param_5 - 1U) &&
           (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8),
           iVar3 = (**(code **)(*plVar2 + 0xe8))
                             (plVar2,uVar1,-(ulonglong)(param_5 != 0) & (ulonglong)&local_48,
                              -(param_5 != 0) & 0x10,bVar5 ^ 1), iVar3 == 0)) {
          if (param_4 == (undefined8 *)0x0) {
            return 0;
          }
          *param_4 = local_48;
          return 0;
        }
      }
      else {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
        iVar3 = (**(code **)(*plVar2 + 0xe8))(plVar2,uVar1,param_4,param_5,bVar5 ^ 1);
        if (iVar3 == 0) {
          return 0;
        }
      }
      goto LAB_18003c653;
    }
    if (param_5 - 1U < 3) goto LAB_18003c653;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    iVar3 = (**(code **)(*plVar2 + 0xe8))
                      (plVar2,uVar1,-(ulonglong)(param_5 != 0) & (ulonglong)&local_48,
                       -(param_5 != 0) & 0x10,bVar5 ^ 1);
    local_res10[0] = local_40;
  }
  if (iVar3 == 0) {
    if (param_4 == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined4 *)param_4 = local_res10[0];
    return 0;
  }
LAB_18003c653:
  uVar4 = 1;
  if (iVar3 != 1) {
    uVar4 = 0x80004005;
  }
  return uVar4;
}

