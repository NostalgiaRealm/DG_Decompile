/*
 * FUN_18003b5c0 at 18003b5c0
 * undefined __fastcall FUN_18003b5c0(longlong * param_1, int param_2, longlong param_3, longlong param_4, undefined4 param_5, uint * param_6, uint param_7, int param_8, char param_9, undefined1 param_10)
 * Address ranges: 18003b5c0-18003b6b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003b5c0(longlong *param_1,int param_2,longlong param_3,longlong param_4,
                  undefined4 param_5,uint *param_6,uint param_7,int param_8,char param_9,
                  undefined1 param_10)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 in_stack_ffffffffffffff94;
  
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
  FUN_180060c98(param_1,param_2,param_3,'\x01',0,param_4,0,
                CONCAT44(in_stack_ffffffffffffff94,param_5),param_6,param_7,param_8,param_9 != '\0',
                '\x01',param_10,0);
  return;
}

