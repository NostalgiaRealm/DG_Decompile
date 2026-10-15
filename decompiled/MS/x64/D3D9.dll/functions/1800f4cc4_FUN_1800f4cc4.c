/*
 * FUN_1800f4cc4 at 1800f4cc4
 * ulonglong __fastcall FUN_1800f4cc4(longlong param_1, longlong param_2, uint param_3, ulonglong * param_4)
 * Address ranges: 1800f4cc4-1800f4da7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800f4cc4(longlong param_1,longlong param_2,uint param_3,ulonglong *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong local_48 [3];
  
  uVar4 = 0;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  param_4[4] = 0;
  if ((param_3 < 2) &&
     (uVar4 = FUN_1800e055c(*(longlong **)(param_1 + 8),param_2,param_3 + 1), (char)uVar4 != '\0'))
  {
    uVar1 = *(uint *)(param_2 + 0x10);
    lVar2 = *(longlong *)(param_1 + 8);
    *param_4 = *(ulonglong *)(param_2 + 0xda0 + (ulonglong)param_3 * 8);
    lVar6 = (ulonglong)uVar1 * 0x1ac0;
    puVar5 = (ulonglong *)
             FUN_1800e1d04(*(longlong *)(lVar6 + 0x2230 + lVar2),local_48,*(uint *)(param_2 + 0xdb0)
                           ,param_3);
    param_4[2] = *puVar5;
    uVar4 = (ulonglong)*(uint *)(param_2 + 0xdb4);
    puVar5 = (ulonglong *)
             FUN_1800e1d04(*(longlong *)(lVar6 + 0x2238 + lVar2),local_48,*(uint *)(param_2 + 0xdb4)
                           ,param_3);
    param_4[3] = *puVar5;
    uVar3 = FUN_1800eaac0(*(longlong **)(*(longlong *)(param_1 + 8) + 0x1b500),*param_4,uVar4,
                          param_3);
    *(undefined4 *)(param_4 + 1) = uVar3;
    uVar3 = *(undefined4 *)(&DAT_180100470 + (longlong)*(int *)(param_2 + 0x34) * 4);
    *(undefined4 *)(param_4 + 4) = uVar3;
    return CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
  }
  return uVar4 & 0xffffffffffffff00;
}

