/*
 * FUN_18001683c at 18001683c
 * bool __fastcall FUN_18001683c(longlong param_1, undefined4 param_2, int param_3)
 * Address ranges: 18001683c-1800168c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18001683c(longlong param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  
  bVar5 = false;
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(param_1 + 0x18);
    if (((param_3 == 0) || (param_3 == 1)) || (param_3 == 2)) {
      uVar3 = (undefined4)plVar1[0x15];
      uVar4 = *(undefined4 *)((longlong)plVar1 + 0xac);
    }
    else {
      uVar3 = 0;
      uVar4 = 0;
    }
    cVar2 = (**(code **)(*plVar1 + 0xf0))(plVar1,param_2,param_3,1,0,0,uVar3,uVar4,0);
    bVar5 = cVar2 != '\0';
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return bVar5;
}

