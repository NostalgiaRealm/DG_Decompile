/*
 * FUN_18003ec90 at 18003ec90
 * undefined __fastcall FUN_18003ec90(longlong param_1, uint * param_2, longlong * param_3, ulonglong param_4, char param_5)
 * Address ranges: 18003ec90-18003edc0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003ec90(longlong param_1,uint *param_2,longlong *param_3,ulonglong param_4,char param_5)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ushort local_res10 [12];
  
  lVar4 = (param_4 & 0xffffffff) * 0xe;
  local_res10[0] =
       *(ushort *)((longlong)param_2 + lVar4 + (ulonglong)(-(uint)(param_5 != '\0') & 0x38) + 0xb8);
  local_res10[1] =
       *(undefined2 *)
        ((longlong)param_2 + lVar4 + (ulonglong)(-(uint)(param_5 != '\0') & 0x38) + 0xba);
  local_res10[2] =
       *(undefined2 *)
        ((longlong)param_2 + lVar4 + (ulonglong)(-(uint)(param_5 != '\0') & 0x38) + 0xbc);
  lVar3 = 0;
  local_res10[3] =
       *(undefined2 *)
        ((longlong)param_2 + lVar4 + (ulonglong)(-(uint)(param_5 != '\0') & 0x38) + 0xbe);
  do {
    if ((((local_res10[lVar3] & 0xf0) - 0x10 & 0xffcf) == 0) &&
       ((local_res10[lVar3] & 0xf0) != 0x40)) {
      bVar1 = (byte)local_res10[lVar3] & 0xf;
      uVar2 = (ulonglong)bVar1;
      if ((param_2[uVar2 + 0x1d] == 0) &&
         ((param_2[uVar2 + 0x20] == 0 && (param_2[uVar2 + 0x23] == 0)))) {
        FUN_18003a108(param_1,(uint)bVar1,param_2,param_3,
                      *(char *)((longlong)param_2 + uVar2 + 0xb0) != -1,
                      *(char *)((longlong)param_2 + uVar2 + 0xb3) != -1,
                      *(char *)((longlong)param_2 + uVar2 + 0xad) != -1);
      }
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  return;
}

