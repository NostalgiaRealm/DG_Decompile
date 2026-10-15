/*
 * FUN_18008f558 at 18008f558
 * char __fastcall FUN_18008f558(longlong * param_1, int param_2, int param_3, uint param_4, char param_5, undefined8 * param_6, undefined4 * param_7)
 * Address ranges: 18008f558-18008f60f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18008f558(longlong *param_1,int param_2,int param_3,uint param_4,char param_5,
                  undefined8 *param_6,undefined4 *param_7)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 local_38;
  undefined4 local_30;
  
  cVar3 = '\x02';
  uVar2 = FUN_18008f504(param_1,param_2,param_3);
  if ((char)uVar2 != '\0') {
    uVar2 = 3;
    if (param_5 != '\0') {
      if ((param_4 & 1) == 0) {
        if ((param_4 & 2) != 0) {
          uVar2 = 2;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    iVar1 = (**(code **)(**(longlong **)(param_1[0xb] + 8) + 0x70))
                      (*(longlong **)(param_1[0xb] + 8),param_1[0x17],
                       param_2 + param_3 * *(int *)((longlong)param_1 + 0x3c),uVar2,
                       (param_4 & 4) << 0x12,&local_38);
    cVar3 = '\0';
    if (iVar1 < 0) {
      cVar3 = (iVar1 != -0x7785fff6) + '\x01';
    }
    else {
      *param_6 = local_38;
      *param_7 = local_30;
    }
  }
  return cVar3;
}

