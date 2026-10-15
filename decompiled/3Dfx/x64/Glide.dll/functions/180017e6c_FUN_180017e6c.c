/*
 * FUN_180017e6c at 180017e6c
 * undefined __fastcall FUN_180017e6c(longlong param_1, int param_2, uint param_3, uint param_4, uint param_5, uint * param_6)
 * Address ranges: 180017e6c-180017fa0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017e6c(longlong param_1,int param_2,uint param_3,uint param_4,uint param_5,uint *param_6
                  )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  char cVar7;
  
  if (*(char *)(param_1 + 100) != '\0') {
    cVar7 = '\x01';
    uVar1 = param_6[3];
    uVar2 = param_6[2];
    uVar3 = param_6[1];
    uVar4 = *param_6;
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    if ((((param_2 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833)) && (uVar3 < 9)) &&
        ((byte)(&DAT_180062c08)[(int)uVar3] < 9)) &&
       (((uVar4 < 9 && ((byte)(&DAT_180062c08)[(int)uVar4] < 9)) && ((uVar1 < 0x10 && (uVar2 < 7))))
       )) {
      uVar5 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x82f);
      if ((param_4 & 0xfffffff8) <= uVar5) {
        uVar5 = param_4 & 0xfffffff8;
      }
      lVar6 = (longlong)param_2 * 0x41 + *(longlong *)(param_1 + 0x18);
      if (((*(byte *)(lVar6 + 0x1a0) == param_5) &&
          (*(uint *)(lVar6 + 0x180 + (ulonglong)param_3 * 4) == uVar5)) &&
         ((*(uint *)(lVar6 + 0x198) == uVar2 &&
          (((*(uint *)(lVar6 + 0x19c) == uVar1 && (*(uint *)(lVar6 + 0x194) == uVar3)) &&
           (*(uint *)(lVar6 + 400) == uVar4)))))) {
        cVar7 = '\0';
      }
      *(uint *)(lVar6 + 0x180 + (ulonglong)param_3 * 4) = uVar5;
      *(char *)(lVar6 + 0x1a0) = (char)param_5;
      *(uint *)(lVar6 + 0x198) = uVar2;
      *(uint *)(lVar6 + 0x19c) = uVar1;
      *(uint *)(lVar6 + 0x194) = uVar3;
      *(uint *)(lVar6 + 400) = uVar4;
      FUN_180017e24(param_1,param_2,cVar7);
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

