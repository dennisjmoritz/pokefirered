# FireRed Story Minimization Progress

## Phase 1: Setup and Discovery
- [ ] Discover maps (init state.json)
- [ ] Parse Key Items
- [ ] Parse proper nouns
- [ ] Create exempt files hash list

## Phase 2: Analysis
- [ ] Dry-run score all maps

## Phase 3: Implementation (Batched)
- [ ] Batch 1: process maps [0..24]
    - [ ] Apply stubs
    - [ ] Add Fly visit hook (towns)
    - [ ] Add National Dex hook (centers)
    - [ ] Prune coord events (qualified)
    - [ ] Update reports
    - [ ] Commit

## Phase 4: Validation
- [ ] REVIEW items (score==3) list prepared
- [ ] Final reports and summary

## Batch Log
<!-- Append-only log of batch processing -->