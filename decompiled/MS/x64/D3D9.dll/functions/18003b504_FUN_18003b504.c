/*
 * FUN_18003b504 at 18003b504
 * undefined __fastcall FUN_18003b504(longlong * param_1, int param_2, longlong param_3, undefined8 * param_4, uint param_5, undefined1 param_6)
 * Address ranges: 18003b504-18003b5be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003b504(longlong *param_1,int param_2,longlong param_3,undefined8 *param_4,uint param_5,
                  undefined1 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    plVar1 = (longlong *)param_1[lVar2 + 0x1f36];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))
                (plVar1,*(undefined4 *)((longlong)param_1 + lVar2 * 4 + 0xf9d8),
                 *(undefined4 *)((longlong)param_1 + lVar2 * 4 + 0xf9e8),0);
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 4);
  plVar1 = (longlong *)param_1[0x1f3a];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))
              (plVar1,(int)param_1[7999],*(undefined4 *)((longlong)param_1 + 0xf9fc),0);
  }
  FUN_18005fc10(param_1,param_2,param_3,'\x01',0,param_4,0,param_5,'\x01',param_6);
  return;
}

