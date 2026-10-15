/*
 * FUN_180089918 at 180089918
 * undefined FUN_180089918(void)
 * Address ranges: 180089918-1800899f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180089918(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_50;
  int local_48;
  int iStack_44;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar3 = *(longlong *)(lVar2 + 0x1cf10) + (ulonglong)*(uint *)(lVar2 + 0x28) * 0x18c0;
  if (*(char *)(param_1 + -3) == '\0') {
    plVar1 = *(longlong **)(lVar3 + 0x6b8);
    (**(code **)(*plVar1 + 0x180))
              (plVar1,*(undefined8 *)(param_1 + 0x20),param_2,0,param_3,param_4,param_5);
  }
  else {
    FUN_1800a2c70(param_1 + -0x20,&local_50,lVar2,param_2);
    if (local_50 == 0) {
      return 0;
    }
    plVar1 = *(longlong **)(lVar3 + 0x6b8);
    (**(code **)(*plVar1 + 0x180))
              (plVar1,*(undefined8 *)(param_1 + 0x20),param_2,0,local_50,local_48 << 2,
               iStack_44 * local_48 * 4);
    thunk_FUN_180102fc0(local_50);
  }
  return 1;
}

