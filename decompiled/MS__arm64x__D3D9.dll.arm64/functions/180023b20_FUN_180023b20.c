/*
 * FUN_180023b20 at 180023b20
 * undefined FUN_180023b20(void)
 * Address ranges: 180023b20-180023bfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023b20(undefined8 param_1,longlong param_2,longlong param_3,byte *param_4,byte *param_5,
                  int param_6,int param_7,uint param_8,uint param_9)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  for (; param_7 != 0; param_7 = param_7 + -1) {
    if (param_6 != 0) {
      lVar1 = param_3;
      lVar2 = param_2;
      iVar3 = param_6;
      if (*(int *)(param_5 + 4) == 3) {
        do {
          iVar3 = iVar3 + -1;
          *(undefined1 *)(lVar1 + (ulonglong)*param_5) =
               *(undefined1 *)(lVar2 + (ulonglong)*param_4);
          *(undefined1 *)(lVar1 + (ulonglong)param_5[1]) =
               *(undefined1 *)(lVar2 + (ulonglong)param_4[1]);
          *(undefined1 *)(lVar1 + (ulonglong)param_5[2]) =
               *(undefined1 *)(lVar2 + (ulonglong)param_4[2]);
          lVar2 = lVar2 + (ulonglong)*(uint *)(param_4 + 4);
          lVar1 = lVar1 + (ulonglong)*(uint *)(param_5 + 4);
        } while (iVar3 != 0);
      }
      else {
        do {
          iVar3 = iVar3 + -1;
          *(undefined1 *)(lVar1 + (ulonglong)*param_5) =
               *(undefined1 *)(lVar2 + (ulonglong)*param_4);
          *(undefined1 *)(lVar1 + (ulonglong)param_5[1]) =
               *(undefined1 *)(lVar2 + (ulonglong)param_4[1]);
          *(undefined1 *)(lVar1 + (ulonglong)param_5[2]) =
               *(undefined1 *)(lVar2 + (ulonglong)param_4[2]);
          *(undefined1 *)(lVar1 + (ulonglong)param_5[3]) =
               *(undefined1 *)(lVar2 + (ulonglong)param_4[3]);
          lVar2 = lVar2 + (ulonglong)*(uint *)(param_4 + 4);
          lVar1 = lVar1 + (ulonglong)*(uint *)(param_5 + 4);
        } while (iVar3 != 0);
      }
    }
    param_2 = param_2 + (ulonglong)param_8;
    param_3 = param_3 + (ulonglong)param_9;
  }
  return;
}

