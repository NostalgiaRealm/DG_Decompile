/*
 * FUN_1800ad878 at 1800ad878
 * undefined __fastcall FUN_1800ad878(longlong param_1)
 * Address ranges: 1800ad878-1800adab8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ad878(longlong param_1)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint local_res10 [2];
  uint local_res18 [2];
  ulonglong uVar3;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    do {
      uVar5 = 0;
      uVar6 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x68) + uVar4 * 4);
      FUN_1800fbcf0((LPVOID)(&DAT_1801123d8)[uVar6 * 5]);
      (&DAT_1801123d8)[uVar6 * 5] = 0;
      (&DAT_1801123e0)[uVar6 * 5] = 0;
      local_res10[0] = 1;
      FUN_180004454(&DAT_1801123d8 + uVar6 * 5,local_res10);
      cVar1 = (&DAT_18010e460)[(ulonglong)*(uint *)(param_1 + 0x10) * 0x1b0];
      while (cVar1 != '\0') {
        uVar3 = 0;
        if (*(int *)(&DAT_180112b30 + uVar6 * 0x4b) != 0) {
          do {
            if (*(uint *)((&DAT_180112b28)[uVar6 * 0x4b] + uVar3 * 4) ==
                (uint)(byte)(&DAT_18010e460)[(ulonglong)*(uint *)(param_1 + 0x10) * 0x1b0 + uVar5])
            {
              local_res10[0] =
                   (uint)(byte)(&DAT_18010e460)
                               [(ulonglong)*(uint *)(param_1 + 0x10) * 0x1b0 + uVar5];
              FUN_180004454(&DAT_1801123d8 + uVar6 * 5,local_res10);
            }
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
          } while (uVar2 < *(uint *)(&DAT_180112b30 + uVar6 * 0x4b));
        }
        uVar5 = (ulonglong)((int)uVar5 + 1);
        cVar1 = (&DAT_18010e460)[(ulonglong)*(uint *)(param_1 + 0x10) * 0x1b0 + uVar5];
      }
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x70));
    uVar4 = 0;
    local_res10[0] = 0;
    if (*(int *)(param_1 + 0x70) != 0) {
      do {
        uVar5 = 0;
        uVar6 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x68) + uVar4 * 4);
        FUN_1800fbcf0((LPVOID)(&DAT_1801123e8)[uVar6 * 5]);
        (&DAT_1801123e8)[uVar6 * 5] = 0;
        (&DAT_1801123f0)[uVar6 * 5] = 0;
        local_res18[0] = 1;
        FUN_180004454(&DAT_1801123e8 + uVar6 * 5,local_res18);
        uVar2 = (uint)uVar4;
        cVar1 = DAT_18010e2b0;
        while (cVar1 != '\0') {
          uVar4 = 0;
          if (*(int *)(&DAT_180112b30 + uVar6 * 0x4b) != 0) {
            do {
              if (*(uint *)((&DAT_180112b28)[uVar6 * 0x4b] + uVar4 * 4) ==
                  (uint)(byte)(&DAT_18010e2b0)[uVar5]) {
                local_res18[0] = (uint)(byte)(&DAT_18010e2b0)[uVar5];
                FUN_180004454(&DAT_1801123e8 + uVar6 * 5,local_res18);
              }
              uVar2 = (int)uVar4 + 1;
              uVar4 = (ulonglong)uVar2;
            } while (uVar2 < *(uint *)(&DAT_180112b30 + uVar6 * 0x4b));
          }
          uVar5 = (ulonglong)((int)uVar5 + 1);
          uVar2 = local_res10[0];
          cVar1 = (&DAT_18010e2b0)[uVar5];
        }
        local_res10[0] = uVar2 + 1;
        uVar4 = (ulonglong)local_res10[0];
      } while (local_res10[0] < *(uint *)(param_1 + 0x70));
    }
  }
  return;
}

