/*
 * FUN_10041f8e at 10041f8e
 * int __stdcall FUN_10041f8e(int param_1, int * param_2, uint param_3, uint param_4, uint param_5, int param_6, int param_7)
 * Address ranges: 10041f8e-10042235
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10041f8e(int param_1,int *param_2,uint param_3,uint param_4,uint param_5,int param_6,
                int param_7)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ushort in_FPUControlWord;
  int local_cc;
  int local_c8;
  undefined2 local_c4;
  int local_a8;
  int local_a4;
  undefined2 local_a0;
  int local_90;
  int local_8c;
  undefined2 local_88;
  int local_84;
  int local_80;
  undefined2 local_7c;
  int aiStack_78 [2];
  char acStack_6f [87];
  uint local_18;
  uint *local_14;
  void *local_10;
  uint local_8;
  
  BVar5 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar5 == 0) {
    FUN_1003c603();
  }
  local_14 = &local_18;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_18 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_18 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  iVar8 = -0x7ff8ffa9;
  if (((param_3 & 0xfffffbf3) == 1) &&
     ((((param_7 == 0 || (param_7 == 1)) && (param_4 < *(uint *)(param_1 + 0x78))) &&
      ((param_4 + param_5 <= *(uint *)(param_1 + 0x78) &&
       (iVar8 = -0x7789f7f4, *(char *)(param_1 + 0x134) == '\0')))))) {
    iVar8 = -0x7789fe52;
    LOCK();
    piVar1 = (int *)(param_1 + 0x1c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((iVar2 == 0) &&
       ((((iVar8 = -0x7789f800, *param_2 != 0 && ((*(byte *)(param_1 + 0x7c) & 4) != 0)) &&
         ((iVar8 = -0x7ff8ffa9, (~*(byte *)(param_1 + 0x70) & 1) != 0 || ((param_3 & 4) == 0)))) &&
        ((param_2[2] != 0 || ((param_3 & 0x400) == 0)))))) {
      FUN_1005c9cc(&local_cc,0,0xb4);
      local_cc = *param_2;
      local_c8 = param_2[1];
      local_a8 = param_2[2];
      local_a4 = param_2[3];
      local_90 = param_2[4];
      local_8c = param_2[5];
      local_84 = param_2[6];
      local_80 = param_2[7];
      local_c4 = 0x302;
      local_a0 = 0x302;
      local_88 = 0x404;
      local_7c = 0x404;
      uVar6 = 0;
      do {
        aiStack_78[uVar6 * 3] = param_2[uVar6 * 2 + 8];
        cVar3 = *(char *)(param_1 + 0xc9 + uVar6 * 8);
        acStack_6f[uVar6 * 0xc] = cVar3;
        if (cVar3 == '\x01') {
          *(undefined1 *)(param_1 + 0xcc + uVar6 * 8) = 0;
        }
        else if (cVar3 == '\x02') {
          *(undefined1 *)(param_1 + 0xcc + uVar6 * 8) = 1;
        }
        else if (cVar3 == '\x03') {
          *(undefined1 *)(param_1 + 0xcc + uVar6 * 8) = 2;
        }
        else if (cVar3 == '\x04') {
          *(undefined1 *)(param_1 + 0xcc + uVar6 * 8) = 3;
        }
        uVar7 = uVar6 + 1;
        aiStack_78[uVar6 * 3 + 1] = param_2[uVar6 * 2 + 9];
        uVar6 = uVar7;
      } while (uVar7 < 8);
      iVar8 = FUN_1003dc4a(local_10,(int)&local_cc,param_1 + 0x7c);
      uVar4 = MXCSR;
      MXCSR = uVar4;
      if (-1 < iVar8) {
        MXCSR = 0x3fc0;
        FUN_1000964d(local_10,&local_cc,*(int *)(param_1 + 4),param_1 + 0x7c,
                     (param_3 >> 7 & 8 | param_3 & 4) >> 1 | param_3 & 9,param_4,param_5,param_6,
                     (byte)param_7 & 1,0);
        MXCSR = uVar4;
        if ((param_3 & 4) != 0) {
          *(byte *)(param_1 + 0x136) = *(byte *)(param_1 + 0x136) | ~*(byte *)(param_1 + 0x70) & 1;
        }
      }
    }
    LOCK();
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    UNLOCK();
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return iVar8;
}

