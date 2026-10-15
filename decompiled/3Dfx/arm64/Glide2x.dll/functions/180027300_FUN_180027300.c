/*
 * FUN_180027300 at 180027300
 * undefined8 __cdecl FUN_180027300(longlong param_1)
 * Address ranges: 180027300-1800274bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180027300(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint local_30;
  uint uStack_2c;
  longlong local_28;
  
  FUN_18004aca0(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508) + 8,0
               );
  lVar7 = *(longlong *)(param_1 + 0x140);
  local_28 = 0;
  local_30 = 0xffffffff;
  uStack_2c = 0xffffffff;
  uVar5 = FUN_180032620((uint *)(param_1 + 0x428),(ulonglong)*(uint *)(lVar7 + 0xb0),
                        *(undefined4 *)(lVar7 + 0xb4),*(int *)(param_1 + 0x30),
                        (uint)*(byte *)(*(longlong *)(lVar7 + 8) + 0x54),&local_28,&uStack_2c,
                        &local_30);
  if ((uVar5 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x4f0);
    if ((*(char *)(lVar7 + 0x14c4) != '\0') &&
       (DVar4 = GetCurrentThreadId(), *(DWORD *)(lVar7 + 0x14b4) != DVar4)) {
      FUN_180043140(*(longlong *)(param_1 + 0x4f0) + 0x12c0);
    }
    FUN_180048d98(*(longlong *)(param_1 + 0x4e8),*(longlong **)(param_1 + 0x520));
    uVar3 = *(uint *)(param_1 + 0x52c);
    *(undefined8 *)(param_1 + 0x520) = 0;
    if (uVar3 != 0xffffffff) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x4f0) + 0x1940);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x28));
      uVar2 = uVar3 & 0xffff;
      uVar1 = uVar2 + 1;
      if (uVar2 < uVar1) {
        lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + (ulonglong)(uVar3 >> 0x10) * 0x10 + 8);
        do {
          uVar5 = -1L << ((ulonglong)uVar2 & 0x3f);
          uVar3 = (uVar2 & 0xffffffc0) + 0x40;
          if (uVar1 < uVar3) {
            uVar5 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar1 & 0x3f) & uVar5;
          }
          *(ulonglong *)(lVar8 + (ulonglong)(uVar2 >> 6) * 8) =
               *(ulonglong *)(lVar8 + (ulonglong)(uVar2 >> 6) * 8) & (uVar5 ^ 0xffffffffffffffff);
          uVar2 = uVar3;
        } while (uVar3 < uVar1);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x28));
    }
    uVar3 = *(uint *)(param_1 + 0x528);
    *(undefined4 *)(param_1 + 0x52c) = 0xffffffff;
    if (uVar3 != 0xffffffff) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x4f0) + 0x1930);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x28));
      FUN_180049988(lVar7,uVar3,1);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x28));
    }
    uVar6 = 1;
    *(longlong *)(param_1 + 0x520) = local_28;
    *(uint *)(param_1 + 0x528) = uStack_2c;
    *(uint *)(param_1 + 0x52c) = local_30;
  }
  return uVar6;
}

