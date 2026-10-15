/*
 * FUN_180031920 at 180031920
 * undefined __fastcall FUN_180031920(longlong param_1, uint * param_2, longlong * param_3, ulonglong param_4, char param_5)
 * Address ranges: 180031920-180031ad2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180031920(longlong param_1,uint *param_2,longlong *param_3,ulonglong param_4,char param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ushort *puVar7;
  ushort local_res10 [12];
  
  lVar4 = (param_4 & 0xffffffff) * 0xe;
  puVar7 = (ushort *)((ulonglong)(-(uint)(param_5 != '\0') & 0x38) + 0xb8 + (longlong)param_2);
  local_res10[0] = puVar7[(param_4 & 0xffffffff) * 7];
  local_res10[1] =
       *(undefined2 *)
        ((longlong)param_2 + lVar4 + (ulonglong)(-(uint)(param_5 != '\0') & 0x38) + 0xba);
  local_res10[2] =
       *(undefined2 *)
        ((longlong)param_2 + lVar4 + (ulonglong)(-(uint)(param_5 != '\0') & 0x38) + 0xbc);
  lVar5 = 0;
  local_res10[3] =
       *(undefined2 *)
        ((longlong)param_2 + lVar4 + (ulonglong)(-(uint)(param_5 != '\0') & 0x38) + 0xbe);
  do {
    if ((((local_res10[lVar5] & 0xf0) - 0x10 & 0xffcf) == 0) &&
       ((local_res10[lVar5] & 0xf0) != 0x40)) {
      bVar2 = (byte)local_res10[lVar5] & 0xf;
      uVar6 = (ulonglong)bVar2;
      if ((param_2[uVar6 + 0x1d] == 0) &&
         ((param_2[uVar6 + 0x20] == 0 && (param_2[uVar6 + 0x23] == 0)))) {
        cVar1 = *(char *)((longlong)param_2 + uVar6 + 0xad);
        FUN_18002c8e8(param_1,(uint)bVar2,param_2,param_3,
                      *(char *)((longlong)param_2 + uVar6 + 0xb0) != -1,
                      *(char *)((longlong)param_2 + uVar6 + 0xb3) != -1,cVar1 != -1);
        if ((cVar1 != -1) && (*(int *)(param_1 + 0x17c + uVar6 * 0x1a0) != 0)) {
          iVar3 = (uint)bVar2 * 0x1a0;
          FUN_18002fdfc(puVar7,bVar2 | 0x2010,bVar2 | 0x2010,0,iVar3 + 0x160,iVar3 + 0x170,param_2,
                        param_3);
        }
      }
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 4);
  return;
}

