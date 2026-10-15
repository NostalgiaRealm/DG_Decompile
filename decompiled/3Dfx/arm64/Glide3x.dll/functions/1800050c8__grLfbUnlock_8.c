/*
 * _grLfbUnlock@8 at 1800050c8
 * bool __cdecl _grLfbUnlock@8(undefined4 param_1, uint param_2)
 * Address ranges: 1800050c8-18000519b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grLfbUnlock_8(undefined4 param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
                    /* 0x50c8  54  _grLfbUnlock@8
                       0x50c8  154  grLfbUnlock */
  lVar2 = FUN_180008ce0();
  if (*(char *)(lVar2 + 100) == '\0') {
    return false;
  }
  FUN_1800643e0((uint *)(lVar2 + 0x60));
  plVar3 = *(longlong **)(lVar2 + 0x18);
  if (param_2 < 3) {
    uVar4 = (undefined4)plVar3[0x15];
    uVar5 = *(undefined4 *)((longlong)plVar3 + 0xac);
  }
  else {
    if (param_2 == 6) {
      uVar4 = *(undefined4 *)((longlong)plVar3 + 0x166);
      puVar6 = (undefined4 *)((longlong)plVar3 + 0x16a);
    }
    else {
      if (param_2 != 7) {
        uVar4 = 0;
        uVar5 = 0;
        goto LAB_180005150;
      }
      uVar4 = *(undefined4 *)((longlong)plVar3 + 0x17a);
      puVar6 = (undefined4 *)((longlong)plVar3 + 0x17e);
    }
    uVar5 = *puVar6;
  }
LAB_180005150:
  cVar1 = (**(code **)(*plVar3 + 0x110))(plVar3,param_1,param_2,1,0,0,uVar4,uVar5,0);
  FUN_1800643d0((uint *)(lVar2 + 0x60));
  return cVar1 != '\0';
}

