/*
 * FUN_180032150 at 180032150
 * undefined __fastcall FUN_180032150(undefined8 param_1, longlong param_2, longlong param_3, byte * param_4, byte * param_5, int param_6, int param_7, uint param_8, uint param_9)
 * Address ranges: 180032150-18003224b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180032150(undefined8 param_1,longlong param_2,longlong param_3,byte *param_4,byte *param_5,
                  int param_6,int param_7,uint param_8,uint param_9)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_7 != 0) {
    do {
      iVar1 = param_6;
      lVar2 = param_2;
      lVar3 = param_3;
      if (*(int *)(param_5 + 4) == 3) {
        for (; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(undefined1 *)(lVar3 + (ulonglong)*param_5) =
               *(undefined1 *)(lVar2 + (ulonglong)*param_4);
          *(undefined1 *)(lVar3 + (ulonglong)param_5[1]) =
               *(undefined1 *)(lVar2 + (ulonglong)param_4[1]);
          *(undefined1 *)(lVar3 + (ulonglong)param_5[2]) =
               *(undefined1 *)(lVar2 + (ulonglong)param_4[2]);
          lVar2 = lVar2 + (ulonglong)*(uint *)(param_4 + 4);
          lVar3 = lVar3 + (ulonglong)*(uint *)(param_5 + 4);
        }
      }
      else {
        for (; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(undefined1 *)(lVar3 + (ulonglong)*param_5) =
               *(undefined1 *)(lVar2 + (ulonglong)*param_4);
          *(undefined1 *)(lVar3 + (ulonglong)param_5[1]) =
               *(undefined1 *)(lVar2 + (ulonglong)param_4[1]);
          *(undefined1 *)(lVar3 + (ulonglong)param_5[2]) =
               *(undefined1 *)(lVar2 + (ulonglong)param_4[2]);
          *(undefined1 *)(lVar3 + (ulonglong)param_5[3]) =
               *(undefined1 *)(lVar2 + (ulonglong)param_4[3]);
          lVar2 = lVar2 + (ulonglong)*(uint *)(param_4 + 4);
          lVar3 = lVar3 + (ulonglong)*(uint *)(param_5 + 4);
        }
      }
      param_2 = param_2 + (ulonglong)param_8;
      param_3 = param_3 + (ulonglong)param_9;
      param_7 = param_7 + -1;
    } while (param_7 != 0);
  }
  return;
}

