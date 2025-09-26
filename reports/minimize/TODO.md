# FireRed Story Minimization Progress

## Phase 1: Setup and Discovery
- [x] Discover maps (init state.json)
- [x] Parse Key Items
- [x] Parse proper nouns
- [x] Create exempt files hash list

## Phase 2: Analysis  
- [x] Dry-run score all maps

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

## Analysis Results Summary
- **Total Labels Analyzed**: 3,670 (across 414 non-exempt maps)  
- **Labels to Keep**: 3,460 (94.3%) - Simple interactions, facilities, basic trainers
- **Labels to Stub**: 191 (5.2%) - High story content (score ≥4)
- **Labels to Review**: 19 (0.5%) - Moderate story content (score 3)

**Maps Requiring Processing**: 78 maps with story content to minimize
**Maps for Manual Review**: 14 maps with borderline story content

## Batch Log
<!-- Append-only log of batch processing -->