/*
 * FUN_180018990 at 180018990
 * bool __cdecl FUN_180018990(longlong param_1, undefined4 param_2, uint param_3)
 * Address ranges: 180018990-180018a2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180018990(longlong param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  bVar1 = false;
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_180061700((uint *)(param_1 + 0x60));
    plVar3 = *(longlong **)(param_1 + 0x18);
    if (param_3 < 3) {
      uVar4 = (undefined4)plVar3[0x15];
      uVar5 = *(undefined4 *)((longlong)plVar3 + 0xac);
    }
    else {
      uVar4 = 0;
      uVar5 = 0;
    }
    cVar2 = (**(code **)(*plVar3 + 0xf0))(plVar3,param_2,param_3,1,0,0,uVar4,uVar5,0);
    bVar1 = cVar2 != '\0';
    FUN_1800616f0((uint *)(param_1 + 0x60));
  }
  return bVar1;
}

