/*
 * FUN_180002178 at 180002178
 * bool __fastcall FUN_180002178(longlong param_1, ulonglong param_2)
 * Address ranges: 180002178-180002239
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180002178(longlong param_1,ulonglong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  
  uVar5 = param_2 & 0xffffffff;
  lVar4 = uVar5 * 600;
  if (*(char *)(uVar5 + 0x46 + param_1) == '\0') {
    LOCK();
    *(int *)(&DAT_1801128f8 + lVar4) = *(int *)(&DAT_1801128f8 + lVar4) + 1;
    UNLOCK();
    if (*(longlong *)(&DAT_1801128f0 + lVar4) == 0) {
      iVar2 = (**(code **)(*(longlong *)(&DAT_1801128e0)[uVar5 * 0x4b] + 0x38))();
      if (iVar2 == 0) {
        puVar3 = FUN_180033dfc((&DAT_1801128fc)[uVar5 * 0x96]);
LAB_1800021e0:
        *(undefined8 **)(&DAT_1801128f0 + lVar4) = puVar3;
      }
      else if (iVar2 == 1) {
        puVar3 = FUN_180040508((&DAT_1801128fc)[uVar5 * 0x96],*(undefined1 *)(DAT_180111f20 + 0x9f9)
                              );
        goto LAB_1800021e0;
      }
      if (*(longlong **)(&DAT_1801128f0 + lVar4) != (longlong *)0x0) {
        cVar1 = (**(code **)(**(longlong **)(&DAT_1801128f0 + lVar4) + 8))();
        if (cVar1 == '\0') {
          puVar3 = *(undefined8 **)(&DAT_1801128f0 + lVar4);
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
          }
          *(undefined8 *)(&DAT_1801128f0 + lVar4) = 0;
          LOCK();
          *(int *)(&DAT_1801128f8 + lVar4) = *(int *)(&DAT_1801128f8 + lVar4) + -1;
          UNLOCK();
        }
      }
      bVar6 = true;
      if (*(longlong *)(&DAT_1801128f0 + lVar4) == 0) goto LAB_18000222e;
    }
    *(undefined1 *)(uVar5 + 0x46 + param_1) = 1;
  }
  bVar6 = *(longlong *)(&DAT_1801128f0 + lVar4) == 0;
LAB_18000222e:
  return !bVar6;
}

