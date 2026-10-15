/*
 * FUN_18000fd80 at 18000fd80
 * undefined8 __cdecl FUN_18000fd80(longlong * param_1, int * param_2)
 * Address ranges: 18000fd80-18000fea7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18000fd80(longlong *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar3 = (ulonglong)
          (param_2[1] & 1U | (param_2[2] & 0xfU | (uint)*(ushort *)(param_2 + 4) << 5) << 1) << 1 |
          ((ulonglong)(param_2[0xb] & 0xfU | (param_2[10] & 0xfU | (param_2[10] & 0xfU) << 4) << 4)
           << 4 | ((ulonglong)
                   (param_2[7] & 0xfU | (param_2[6] & 0xfU | (param_2[6] & 0xfU) << 4) << 4) << 4 |
                  (ulonglong)(uint)param_2[8] & 0xf) << 0x10 | (ulonglong)(uint)param_2[0xc] & 0xf)
          << 0x20 | (ulonglong)(param_2[3] != 0) << 6 | (ulonglong)(*param_2 != 0);
  if (uVar1 != 0) {
    uVar5 = 0;
    uVar4 = uVar1;
    do {
      uVar2 = uVar4 + uVar5 >> 1;
      uVar7 = (ulonglong)uVar2;
      uVar6 = *(ulonglong *)(*param_1 + uVar7 * 0x48);
      if (uVar6 <= uVar3) {
        if (uVar3 <= uVar6) break;
        uVar5 = uVar2 + 1;
        uVar7 = (ulonglong)(uVar2 + 1);
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
    } while (uVar4 != uVar5);
    if (((uint)uVar7 != uVar1) && (*(ulonglong *)(*param_1 + uVar7 * 0x48) == uVar3))
    goto LAB_18000fe8c;
  }
  FUN_18000fea8(param_1,(uint)uVar7,uVar3,(undefined8 *)param_2);
LAB_18000fe8c:
  return *(undefined8 *)(*param_1 + uVar7 * 0x48 + 0x40);
}

