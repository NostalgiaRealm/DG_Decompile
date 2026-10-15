/*
 * FUN_18003b404 at 18003b404
 * undefined __fastcall FUN_18003b404(longlong * param_1, int param_2, longlong param_3, longlong param_4, uint param_5, undefined4 param_6, uint * param_7, uint param_8, int param_9, char param_10, undefined1 param_11)
 * Address ranges: 18003b404-18003b500
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003b404(longlong *param_1,int param_2,longlong param_3,longlong param_4,uint param_5,
                  undefined4 param_6,uint *param_7,uint param_8,int param_9,char param_10,
                  undefined1 param_11)

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
  FUN_180060c98(param_1,param_2,param_3,'\x01',0,param_4,param_5,
                CONCAT44(in_stack_ffffffffffffff94,param_6),param_7,param_8,param_9,param_10 != '\0'
                ,'\0',param_11,0);
  return;
}

