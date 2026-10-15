/*
 * _grLfbUnlock@8 at 180003ff0
 * bool __cdecl _grLfbUnlock@8(undefined4 param_1, uint param_2)
 * Address ranges: 180003ff0-18000408f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grLfbUnlock_8(undefined4 param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
                    /* 0x3ff0  56  _grLfbUnlock@8
                       0x3ff0  213  grLfbUnlock */
  lVar3 = FUN_180016878();
  bVar1 = false;
  if (*(char *)(lVar3 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar3 + 0x60));
    plVar4 = *(longlong **)(lVar3 + 0x18);
    if (param_2 < 3) {
      uVar5 = (undefined4)plVar4[0x15];
      uVar6 = *(undefined4 *)((longlong)plVar4 + 0xac);
    }
    else {
      uVar5 = 0;
      uVar6 = 0;
    }
    cVar2 = (**(code **)(*plVar4 + 0xf0))(plVar4,param_1,param_2,1,0,0,uVar5,uVar6,0);
    bVar1 = cVar2 != '\0';
    FUN_1800608a0((uint *)(lVar3 + 0x60));
  }
  return bVar1;
}

